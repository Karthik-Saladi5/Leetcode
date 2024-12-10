class Solution {
    int count(string s,int len){
        vector<int> freq(26,0);
        int n=s.size();
        for(int i=0,j=0;i<n;i++){
            while(s[j]!=s[i]) j++;
            if(i-j+1>=len) freq[s[i]-'a']++;
            if(freq[s[i]-'a']>2) return 1;
        }
        return 0;
    }
public:
    int maximumLength(string s) {
        int l=1,r=s.size();
        // search space will be length
        if(!count(s,l)) return -1;
        while(l+1<r){
            int mid=l+(r-l)/2;
            if(count(s,mid)) l=mid;
            else r=mid;
        }
        return l;
    }
};