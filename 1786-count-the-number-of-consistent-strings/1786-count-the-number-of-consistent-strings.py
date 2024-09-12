class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        allowed=set(allowed)
        ans=0
        for i in words:
            if all(ch in allowed for ch in i):
                ans+=1
        return ans