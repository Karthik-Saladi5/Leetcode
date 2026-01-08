class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        vector<int> freq(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]-1]++;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0) ans.push_back(i+1);
        }
        return ans;
    }
};