#define ll long long
class Solution {
    const int mod=1e9+7;
public:
    int nthMagicalNumber(int n, int a, int b) {
        ll mn=min(a,b);
        ll low=mn,high=mn*n;
        ll lcm=1LL*(a*b)/__gcd(a,b),ans=-1;
        while(low<=high){
            ll mid=low+(high-low)/2;
            ll k=(floor(mid/a)+floor(mid/b)-floor(mid/lcm));
            if(k<n) low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            } 
        }
        return ans%mod;
    }
};