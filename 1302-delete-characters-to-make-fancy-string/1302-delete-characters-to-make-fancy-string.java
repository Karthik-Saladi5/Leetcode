class Solution {
    public String makeFancyString(String s) {
        StringBuilder ans=new StringBuilder();
        ans.append(s.charAt(0));
        int c=1;
        for(int i=1;i<s.length();i++){
            if(s.charAt(i)==ans.charAt(ans.length()-1)){
                c++;
                if(c<3) ans.append(s.charAt(i));
            }
            else{
                c=1;
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();
    }
}