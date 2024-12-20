/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {
    private void pre(TreeNode n1,TreeNode n2,int level){
        if(n1==null || n2==null) return;
        if(level%2==0){
            int val=n1.val;
            n1.val=n2.val;
            n2.val=val;
        }
        pre(n1.left,n2.right,level+1);
        pre(n1.right,n2.left,level+1);
    }
    public TreeNode reverseOddLevels(TreeNode root) {
        pre(root.left,root.right,0);
        return root;
    }
}