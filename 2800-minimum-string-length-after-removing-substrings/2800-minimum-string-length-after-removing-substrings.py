class Solution:
    def minLength(self, s: str) -> int:
        st=[]
        for i in s:
            if not st:
                st.append(i)
                continue
            if st[-1]=="A" and i=="B":
                st.pop()
            elif st[-1]=="C" and i=="D":
                st.pop()
            else:
                st.append(i)
        return len(st)
        