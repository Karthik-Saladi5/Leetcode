class Solution {
    public int concatenatedBinary(int n) {
        int mod=(int)Math.pow(10,9)+7;
        long ans=0;
        int length=0;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0) length++;
            ans=((ans<<length)%mod+i%mod)%mod;
            // System.out.println(length);
        }
        return (int)ans;
    }
}