class Solution {
public:
    int countPrimes(int n) {
        vector<int> sieve(n+1,1);
        int c=0;
        for(int i=2;i<n;i++){
            if(sieve[i]){
                for(int j=i*2;j<=n;j+=i){
                    sieve[j]=0;
                }
                c++;
            }
        }
        return c;
    }
};