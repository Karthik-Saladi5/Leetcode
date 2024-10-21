class Solution:
    def maxUniqueSplit(self, s: str) -> int:
        def backtrack(start, st):
            if start == len(s):
                return 0
            ans = 0
            for end in range(start + 1, len(s) + 1):
                substring = s[start:end]
                if substring not in st:
                    st.add(substring)
                    ans = max(ans, 1 + backtrack(end, st))
                    st.remove(substring)
            return ans
        return backtrack(0, set())
        