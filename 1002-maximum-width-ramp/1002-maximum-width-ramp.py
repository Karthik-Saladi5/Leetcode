class Solution:
    def maxWidthRamp(self, nums: List[int]) -> int:
        n=len(nums) 
        st=[]
        for i in range(n):
            if not st or nums[st[-1]]>nums[i]:
                st.append(i)
        mx=0
        for i in range(n-1,-1,-1):
            while st and nums[st[-1]]<=nums[i]:
                mx=max(mx,i-st.pop())
        return mx