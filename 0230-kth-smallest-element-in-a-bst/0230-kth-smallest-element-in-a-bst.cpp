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
    void ino(TreeNode* root,int &k,int &ans,int &c){
        if(!root) return;
        ino(root->left,k,ans,c);
        c++;
        if(c==k){
            ans=root->val;
            return;
        }
        ino(root->right,k,ans,c);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        int c=0;
        ino(root,k,ans,c);
        return ans;
    }
};