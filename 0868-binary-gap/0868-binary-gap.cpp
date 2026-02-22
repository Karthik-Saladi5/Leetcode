class Solution {
public:
    int binaryGap(int n) {
         bool prev = false;
        int ans = 0;
        int pos = 0;
        int ind = 0;
        while(n>0){
            ind++;
            bool one = n&1;
            if(one && prev) ans = max(ans,ind-pos);
            if(one) {
                prev = true;
                pos = ind;
            }
            n = n>>1;
        }
        return ans;
    }
};