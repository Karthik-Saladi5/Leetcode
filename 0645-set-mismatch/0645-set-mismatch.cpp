class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=1,s=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) t=nums[i];
            else{
                s+=nums[i];
            }
        }
        int n=nums.size();
        return {t,(n*(n+1)/2)-s};
    }
};