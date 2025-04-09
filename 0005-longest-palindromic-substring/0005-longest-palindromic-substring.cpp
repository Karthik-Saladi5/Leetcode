class Solution {
public:
    // static bool isPalin(string s){
    //     return s==string(s.rbegin(),s.rend());
    // }
    string longestPalindrome(string s) {
        string ans="";
        int mx=0,n=s.size();
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(mx<r-l+1){
                    ans=s.substr(l,r-l+1);
                    mx=r-l+1;
                }
                l--;
                r++;
            }
            l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(mx<r-l+1){
                    ans=s.substr(l,r-l+1);
                    mx=r-l+1;
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};