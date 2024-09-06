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
    public ListNode modifiedList(int[] nums, ListNode head) {
        Set<Integer> s = new HashSet<>();
        for(int i:nums) s.add(i);
        ListNode ans=new ListNode(0);
        ans.next=head;
        ListNode cur=ans;
        while(cur.next!=null){
            if(s.contains(cur.next.val)){
                ListNode prev=cur.next;
                cur.next=cur.next.next;
            }
            else cur=cur.next;
        }
        return ans.next;
    }
}