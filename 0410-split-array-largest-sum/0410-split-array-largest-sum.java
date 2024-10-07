class Solution {
    public int splitArray(int[] nums, int k) {
        int low=-1,high=0;
        for(int i:nums){
            low=Math.max(i,low); // as single parts
            high+=i; // as whole arr
        } 
        int mid=low+(high-low)/2;
        while(low<high){
            mid=low+(high-low)/2;
            int c=1; // no of subs
            int s=0; 
            for(int i:nums){
                if(s+i>mid){ // another elements exceeds mid
                    s=i;
                    c++;
                }
                else s+=i;
            }
            if(c<=k) high=mid;
            else low=mid+1;
        }
        return high;
    }
}