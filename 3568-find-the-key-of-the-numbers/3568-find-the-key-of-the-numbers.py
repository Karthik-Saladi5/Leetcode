class Solution(object):
    def generateKey(self, num1, num2, num3):
        """
        :type num1: int
        :type num2: int
        :type num3: int
        :rtype: int
        """
        a=str(num1).zfill(4)
        b=str(num2).zfill(4)
        c=str(num3).zfill(4)
        key=""
        for i in range(4):
            key+=min(a[i],b[i],c[i])
        return int(key)
        