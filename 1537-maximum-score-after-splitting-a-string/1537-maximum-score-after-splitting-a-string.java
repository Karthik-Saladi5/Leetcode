class Solution {
    public int maxScore(String s) {
        int z=0,o=0,mx=Integer.MIN_VALUE;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='0') z++;
            else o++;
            if(i!=s.length()-1) mx=Math.max(z-o,mx);
        }
        return mx+o;
    }
}