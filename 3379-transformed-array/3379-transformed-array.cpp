class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0) ans[i]=0;
            if(nums[i]<0){
                int ind=i-abs(nums[i])%n;
                if(ind>=0) ans[i]=nums[ind];
                else ans[i]=nums[n+ind];
            }
            if(nums[i]>0){
                int ind=nums[i]%n;
                ans[i]=nums[(i+ind)%n];
            }
        }
        return ans;
    }
};