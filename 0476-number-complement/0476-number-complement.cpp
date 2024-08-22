class Solution {
public:
    int findComplement(int n) {
        int rn=1;
        while((rn&n)!=n){
            rn=rn<<1;
            rn++;
        }
        return rn^n;
    }
};