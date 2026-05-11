class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans = []
        for num in nums:
            s = str(num)
            for ch in s:
                ans.append(int(ch))
        return ans