class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long s=accumulate(batteries.begin(),batteries.end(),0LL);
        sort(batteries.rbegin(),batteries.rend());
        // long long avg=s/n;
        for(auto i:batteries){
            if(i<=(long long)s/n) break;
            s-=i;
            n--;
        }
        return (long long)s/n;
    }
};