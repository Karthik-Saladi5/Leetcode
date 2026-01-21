#define ll long long
class Solution {
    vector<ll> sieve(int n){
        vector<ll>v(n);
        v[0] = 1;
        v[1] = 1;
        for(int i=2;i*i<n;i++){
            if(v[i] == 0){
                for(int j= i*i;j<n;j+=i){
                    v[j] = 1;
                }
            }
        }
        return v;
    }

public:
    ll splitArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return abs(nums[0]);
        if(n==2) return abs(nums[0]+nums[1]);
        vector<ll> primes=sieve(n);
        ll a=0;
        ll b=0;
        for(int i=0;i<n;i++){
            if(!primes[i]) a+=nums[i]*1LL;
            if(primes[i]) b+=nums[i]*1LL;
        }
        return abs(a-b);
    }
};