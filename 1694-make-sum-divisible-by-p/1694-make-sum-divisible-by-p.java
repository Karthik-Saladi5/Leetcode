class Solution {
    public int minSubarray(int[] nums, int p) {
        long totalSum=0;
        for(int i:nums) totalSum+=i;
        if(totalSum%p==0) return 0;
        int rem=(int)(totalSum%p);
        HashMap<Integer,Integer> pre=new HashMap<>();
        pre.put(0,-1);
        long preSum=0;
        int mn=nums.length;
        for(int i=0;i<nums.length;i++){
            preSum+=nums[i];
            int cur=(int)(preSum%p);
            int req=(cur-rem+p)%p;
            if(pre.containsKey(req)) mn=Math.min(mn,i-pre.get(req));
            pre.put(cur,i);
        }
        return mn==nums.length ? -1:mn;

    }
}