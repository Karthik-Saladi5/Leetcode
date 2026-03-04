class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int c=0,m=mat.size(),n=mat[0].size();
        vector<int> rs(m,0),cs(n,0);
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                rs[i]+=mat[i][j];
                cs[j]+=mat[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 and rs[i]==1 and cs[j]==1) c++;
            }
        }
        return c;
    }
};