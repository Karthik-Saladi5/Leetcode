class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long mx=0,dif=0,ans=0;
        for(long long i:nums){
            ans=max(ans,dif*i);
            dif=max(dif,mx-i);
            mx=max(i,mx);
        }
        return ans;
    }
};