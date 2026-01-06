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
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int maxSum=INT_MIN, maxLevel=0;
        int curSum=0;
        // s+=root->val;
        int curLevel=0;

        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* cur=q.front();
                curSum+=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
                q.pop();
            }
            curLevel++;
            if(curSum>maxSum){
                maxSum=curSum;
                maxLevel=curLevel;
            }
            curSum=0;
        }
        return maxLevel;
    }
};