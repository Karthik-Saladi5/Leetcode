class Solution {
public:
    string stringHash(string s, int k) {
        string ans="";
        for(int i=0;i<s.size();i+=k){
            string sub=s.substr(i,k);
            int s=0;
            for(auto i:sub){
                s+=i-'a';
            }
            int hc=s%26;
            char temp=hc+'a';
            ans+=temp;
        }
        return ans;
    }
};