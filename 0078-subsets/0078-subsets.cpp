class Solution {
    void rec(int i,int n,vector<int> &cur,vector<int> &nums,vector<vector<int>> &ans){
        if(i>=n){
            ans.push_back(cur);
            return;
        }
        rec(i+1,n,cur,nums,ans);
        cur.push_back(nums[i]);
        rec(i+1,n,cur,nums,ans);
        cur.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> cur;
        vector<vector<int>> ans;
        rec(0,nums.size(),cur,nums,ans);
        return ans;
    }
};