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
class FindElements {
    unordered_set<int> s;
public:
    void rec(TreeNode* root,int x){
        if(!root) return;
        s.insert(x);
        if(root->right) root->right->val=x*2+2;
        if(root->left) root->left->val=x*2+1;
        rec(root->left,x*2+1);
        rec(root->right,x*2+2);
    }
    FindElements(TreeNode* root) {
        rec(root,0);
    }
    
    bool find(int target) {
        return s.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */