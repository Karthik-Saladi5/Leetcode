class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long s=0;
        int mn=INT_MAX, c=0;
        for(auto i:matrix){
            for(auto j:i){
                mn=min(mn,abs(j));
                if(j<0) c++;
                s+=abs(j);
            }
        }
        return (c&1) ? s-2*mn:s;
    }
};