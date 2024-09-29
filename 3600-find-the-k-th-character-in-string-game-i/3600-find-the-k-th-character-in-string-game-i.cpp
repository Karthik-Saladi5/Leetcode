class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        while(ans.size()<=k){
            string cur="";
            for(auto i:ans) cur+=(char)(i+1);
            ans+=cur;
        }
        return ans[k-1];
    }
};