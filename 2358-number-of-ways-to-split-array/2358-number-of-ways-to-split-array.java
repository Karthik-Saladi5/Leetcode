class Solution {
    public int waysToSplitArray(int[] nums) {
        int n=nums.length;
        long totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        long rightSum=0;
        int c=0;
        for(int i=0;i<n-1;i++){
            rightSum+=nums[i];
            if(rightSum>=totalSum-rightSum) c++;
        }
        return c;
    }
}