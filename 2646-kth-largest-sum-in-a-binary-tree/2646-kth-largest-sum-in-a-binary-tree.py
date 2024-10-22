# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        root.level = 0
        mp = defaultdict(int)
        q = [root]
        while q:
            node = q.pop()
            mp[node.level] += node.val
            if node.left: 
                node.left.level = node.level + 1
                q.append(node.left)
            if node.right:
                node.right.level = node.level + 1
                q.append(node.right)
        a = [mp[k] for k in mp]
        if k > len(a): return -1
        a.sort()
        return a[-k]