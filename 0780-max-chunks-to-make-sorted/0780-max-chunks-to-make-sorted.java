class Solution {
    public int maxChunksToSorted(int[] arr) {
        int n=arr.length;
        int c=0, d=0;
        for(int i=0; i<n; i++){
            d+=arr[i]-i;
            if(d==0) c++;
        }
        return c;
    }
}