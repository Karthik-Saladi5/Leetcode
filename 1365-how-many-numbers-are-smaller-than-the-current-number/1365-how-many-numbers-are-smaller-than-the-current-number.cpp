class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> pos=nums;
        sort(pos.begin(),pos.end());
        for(int i=0;i<nums.size();i++){
            ans[i]=lower_bound(pos.begin(),pos.end(),nums[i])-pos.begin();
        }
        return ans;
    }
};