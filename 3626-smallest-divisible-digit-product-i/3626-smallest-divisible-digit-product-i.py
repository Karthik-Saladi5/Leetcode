class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        def check(x):
            p=1
            for c in str(x):
                p*=int(c)
            return p%t==0
        while not check(n):
            n+=1
        return n 