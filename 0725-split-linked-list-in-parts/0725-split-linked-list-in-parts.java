/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode[] splitListToParts(ListNode head, int k) {
        ListNode[] ans=new ListNode[k];
        int n=0;
        ListNode temp=head;
        while(temp!=null){
            temp=temp.next;
            n++;
        }
        int r=n%k, spc=n/k;
        ListNode prev=head, nxt=head;
        for (int i=0;i<k;i++) {
            ans[i]=nxt;
            int p=spc + (i<r ? 1 : 0);
            for (int j=0;j<p-1;j++) {
                nxt=nxt.next;
            }
            if (nxt!=null) {
                ListNode nextPart=nxt.next;
                nxt.next=null;
                nxt=nextPart;
            }
        }
        return ans;
    }
}