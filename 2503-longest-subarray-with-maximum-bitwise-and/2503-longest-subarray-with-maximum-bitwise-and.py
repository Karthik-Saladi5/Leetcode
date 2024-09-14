class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        ans,c=0,0
        mx=max(nums)
        for i in nums:
            if i==mx:
                c+=1
            else:
                c=0
            ans=max(ans,c)
        return ans