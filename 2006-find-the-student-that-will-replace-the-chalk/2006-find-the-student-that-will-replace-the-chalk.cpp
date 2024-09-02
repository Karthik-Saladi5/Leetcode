#define ll long long
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        ll s=0,i=0;
        for(auto c:chalk) s+=c;
        k%=s;
        if(k==0) return 0;
        while(chalk[i]<=k) k-=chalk[i++];
        return i;
    }
};