class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        word1=s1.split()
        word2=s2.split()
        words=word1+word2
        freq=Counter(words)
        return [i for i in freq if freq[i]==1]
