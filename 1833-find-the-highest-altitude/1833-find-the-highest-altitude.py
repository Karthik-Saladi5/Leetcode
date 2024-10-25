class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        s=0
        mx=0
        for i in gain:
            s+=i
            mx=max(mx,s)
        return mx