class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        pre=set([])
        for i in arr1:
            s=str(i)
            for j in range(1,len(s)+1):
                pre.add(s[:j])
        c=0
        for i in arr2:
            s=str(i)
            for j in range(1,len(s)+1):
                if s[:j] in pre:
                    c=max(c,j)
                else:
                    break
        return c
        