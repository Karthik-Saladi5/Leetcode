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
    vector<int> v;
    void ino(TreeNode* root) {
        if(!root) return;
        ino(root->left);
        v.push_back(root->val);
        ino(root->right);
    }
    TreeNode* build(TreeNode* root,int start,int end) {
        if(start > end) return NULL;
        int mid = start + (end - start) / 2;
        TreeNode* node = new TreeNode(v[mid]);
        node -> left = build(node,start,mid - 1);
        node -> right = build(node,mid + 1, end);
        return node;
    }   
    TreeNode* balanceBST(TreeNode* root) {
        ino(root);
        int n = v.size();
        return build(root,0,n-1);
    }
};