class Solution {
    int bin(int[] arr,int key,boolean flag){
        int start=0,end=arr.length-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]<key) start=mid+1;
            else if(arr[mid]>key) end=mid-1;
            else{
                ans=mid;
                if(flag) end=mid-1;
                else start=mid+1;
            }
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int[] ans={-1,-1};
        ans[0]=bin(nums,target,true);
        ans[1]=bin(nums,target,false);
        return ans;
    }
}