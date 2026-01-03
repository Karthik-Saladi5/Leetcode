class Solution {
public:
    int numOfWays(int n) {
        int mod= 1000000007;
        long long aba=6, abc=6;
        for(int i=2;i<=n;i++){
            long long ABA=(aba*3+abc*2)%mod;
            long long ABC=(aba*2+abc*2)%mod;
            aba=ABA;
            abc=ABC;
        }
        return (aba+abc)%mod;
    }
};