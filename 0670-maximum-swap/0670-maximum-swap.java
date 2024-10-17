class Solution {
    public int maximumSwap(int num) {
        char[] nums=Integer.toString(num).toCharArray();
        int mx=-1,left=-1,right=-1;
        int n=nums.length;
        for(int i=n-1;i>=0;i--){
            if(mx==-1 || nums[i]>nums[mx]) mx=i;
            else if(nums[i]<nums[mx]){
                left=i;
                right=mx;
            }
        }
        if(left!=-1 && right!=-1){
            char temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
        }
        return Integer.parseInt(new String(nums));
    }
}