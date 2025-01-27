class Solution {
    void rec(int row,int n,vector<string> &cur,vector<vector<string>> &ans){
        if(row==n){
            ans.push_back(cur);
            return;
        }
        for(int col=0;col<n;col++){
            if(isValid(cur,row,col,n)){
                cur[row][col]='Q';
                rec(row+1,n,cur,ans);
                cur[row][col]='.';
            }
        }
    }
    bool isValid(vector<string> &cur,int row,int col,int n){
        for(int i=0;i<row;i++){
            if(cur[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--)
            if(cur[i][j]=='Q') return false;
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++)
            if(cur[i][j]=='Q') return false;
        return true;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> cur(n,string(n,'.'));
        rec(0,n,cur,ans);
        return ans;

    }
};