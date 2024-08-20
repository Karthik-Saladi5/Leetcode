class Solution {
    public int minSteps(int n) {
        if(n==1) return 0;
        int c=0;
        int fac=2;
        while(n>1){
            while(n%fac==0){
                c+=fac;
                n/=fac;
            }
            fac++;
        }
        return c;
    }
}