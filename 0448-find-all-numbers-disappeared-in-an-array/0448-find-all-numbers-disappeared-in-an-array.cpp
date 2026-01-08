class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int ind=abs(nums[i])-1;
            nums[ind]=-abs(nums[ind]);
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};