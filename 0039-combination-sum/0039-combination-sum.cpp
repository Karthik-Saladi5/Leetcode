class Solution {
    void rec(int i,int n,int s,int target,vector<int> &cand,vector<int> &cur,vector<vector<int>> &ans){
        if(s==target){
            ans.push_back(cur);
            return;
        }
        if(i>=n || s>target) return;
        for(int j=i;j<n;j++){
            cur.push_back(cand[j]);
            s+=cand[j];
            rec(j,n,s,target,cand,cur,ans);
            cur.pop_back();
            s-=cand[j];
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int> cur;
        vector<vector<int>> ans;
        rec(0,n,0,target,candidates,cur,ans);
        return ans;
    }
};