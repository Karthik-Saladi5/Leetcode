class Solution {
    bool hz(int a){
        while(a>0){
            if(a%10==0) return 1;
            a/=10;
        }
        return 0;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int a=n-i;
            int b=i;
            if(!hz(a) && !hz(b)) return {a,b};
        }
        return {1,n-1};
    }
};