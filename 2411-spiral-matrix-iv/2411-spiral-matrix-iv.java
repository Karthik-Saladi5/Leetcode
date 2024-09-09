/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int[][] spiralMatrix(int m, int n, ListNode head) {
        int top = 0, left = 0;
        int bottom = m - 1, right = n - 1;
        int[][] ans = new int[m][n];
        for (int i = 0; i < m; i++) {
            Arrays.fill(ans[i], -1);
        }
        while (head != null) {
            // Right
            for (int i = left; i <= right && head != null; i++) {
                ans[top][i] = head.val;
                head = head.next;
            }
            top++;
            // Bottom
            for (int i = top; i <= bottom && head != null; i++) {
                ans[i][right] = head.val;
                head = head.next;
            }
            right--;
            // Left
            for (int i = right; i >= left && head != null; i--) {
                ans[bottom][i] = head.val;
                head = head.next;
            }
            bottom--;
            // Up
            for (int i = bottom; i >= top && head != null; i--) {
                ans[i][left] = head.val;
                head = head.next;
            }
            left++;
        }
        return ans;
    }
}