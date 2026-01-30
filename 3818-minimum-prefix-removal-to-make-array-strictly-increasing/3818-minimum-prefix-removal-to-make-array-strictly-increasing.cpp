class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]<=nums[i-1]) return nums.size()-(nums.size()-i);
        }
        return 0;
    }
};