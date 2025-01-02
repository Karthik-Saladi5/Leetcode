class Solution {
    boolean isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u') return true;
        return false;
    }
    public int[] vowelStrings(String[] words, int[][] queries) {
        int n=words.length;
        int[] pre=new int[n];
        int c=0;
        for(int i=0;i<n;i++){
            String s=words[i];
            if(isVowel(s.charAt(0)) && isVowel(s.charAt(s.length()-1))) c++;
            pre[i]=c;
        }
        int[] ans=new int[queries.length];
        int i=0;
        for(int[] q:queries){
            int start=q[0],end=q[1];
            ans[i]=pre[end];
            if(start!=0) ans[i]-=pre[start-1];
            i++;
        }
        return ans;
    }
}