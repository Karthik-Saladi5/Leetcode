class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        int n=nums.length;
        while(k-- >0){
            int ind=0;
            int mn=nums[0];
            for(int i=1;i<n;i++){
                if(nums[i]<mn){
                    mn=nums[i];
                    ind=i;
                }
            }
            nums[ind]*=multiplier;
        }
        return nums;
    }
}