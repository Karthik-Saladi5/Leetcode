class Solution {
    public int chalkReplacer(int[] chalk, int k) {
        long s=0;
        int i=0;
        for(int c:chalk) s+=c;
        k%=s;
        if(k==0) return 0;
        while(chalk[i]<=k) k-=chalk[i++];
        return i;
    }
}