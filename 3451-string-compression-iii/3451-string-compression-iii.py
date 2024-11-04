class Solution:
    def compressedString(self, word: str) -> str:
        ans=''
        i=0
        while i<len(word):
            c=0
            ch=word[i]
            while i<len(word) and word[i]==ch and c<9:
                i+=1
                c+=1
            ans+=str(c)+ch
        return ans