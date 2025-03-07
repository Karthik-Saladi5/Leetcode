class Solution {
public:
    void findPrimes(vector<bool>&prime){
        prime[0]=prime[1]=false;
        for(int i = 2 ; i*i < prime.size() ; i++){
            if(prime[i] == true){
                for(int j = i * i ; j < prime.size() ; j += i){
                    prime[j] = false;
                }
            }
        }
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>res {-1,-1};
        vector<bool>prime(right+1,1);
        findPrimes(prime);
        int mn = INT_MAX;
        int prev = -1;
        for(int i = left ; i <= right ; i++){
            if(prime[i]){
                if(prev != -1){
                    if(i - prev < mn){
                        res = {prev,i};
                        mn = i - prev;
                    }
                }
                prev = i;
            }
        }
        return res;
    }
};