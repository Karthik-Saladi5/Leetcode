class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < n - k + 1; i++) {
            bool valid = 1;
            for(int j = 0 ; j < k - 1; j++) {
                if(nums[i + j] + 1 != nums[i + j + 1]) {
                    valid = 0;
                    break;
                }
            }
            if(valid) ans.push_back(*max_element(nums.begin() + i, nums.begin() + i + k)); 
            else ans.push_back(-1);
        }
        return ans;
    }
};