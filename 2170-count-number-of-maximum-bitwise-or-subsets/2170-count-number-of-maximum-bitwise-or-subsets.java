class Solution {
    private int cnt=0;
    private void count(int ind,int[] nums,int target,int cur){
        if(cur>target) return;
        if(ind>=nums.length){
            if(cur==target){
                cnt++;
            }
           return;
        }
        count(ind+1,nums,target,cur|nums[ind]);
        count(ind+1,nums,target,cur);
    }
    public int countMaxOrSubsets(int[] nums) {
        int sum=0;
        for(int i: nums) sum|=i;
        count(0,nums,sum,0);
        return cnt;
    }
}