# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp=head
        while temp and temp.next:
            gcd=math.gcd(temp.val,temp.next.val)
            new_node=ListNode(gcd)
            new_node.next=temp.next
            temp.next=new_node
            temp=new_node.next
        return head
        