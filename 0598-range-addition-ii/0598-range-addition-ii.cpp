class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()) return m*n;
        int mnA=m,mnB=n;
        for(auto i:ops){
            mnA=min(mnA,i[0]);
            mnB=min(mnB,i[1]);
        }
        return mnA*mnB;
    }
};