/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int MOD=1e9+7;
    unordered_map<TreeNode*,int> dp;
    int sumOfTree(TreeNode* root){
        if(!root) return 0;
        if(dp.count(root)) return dp[root];
        dp[root]= (sumOfTree(root->left)+sumOfTree(root->right)+root->val)%MOD;
        return dp[root];
    }
public:
    int maxProduct(TreeNode* root) {
        long long totalSum=sumOfTree(root);
        long long remSum=0,mxPr=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* curNode=q.front();
                q.pop();
                long long curSum=dp[curNode];
                remSum=(totalSum-curSum);
                mxPr=max(mxPr,(curSum*remSum));
                if(curNode->left) q.push(curNode->left);
                if(curNode->right) q.push(curNode->right);
            }
        }
        return mxPr%MOD;
    }
};