class Solution:
    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        ans=[]
        for i in range(len(nums)-k+1):
            temp=[[c,v] for v,c in Counter(nums[i:i+k]).items()]
            temp=heapq.nlargest(x,temp)
            ans.append(sum(v*c for c,v in temp))
        return ans
