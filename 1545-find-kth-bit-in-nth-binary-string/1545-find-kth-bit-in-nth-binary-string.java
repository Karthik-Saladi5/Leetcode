class Solution {
    static String invert(String s){
        char[] nums=s.toCharArray();
        for(int i=0;i<nums.length;i++){
            if(nums[i]=='0') nums[i]='1';
            else nums[i]='0';
        }
        return new String(nums);
    }
    static String reverse(String s) {
        return new StringBuilder(s).reverse().toString();
    }
    public char findKthBit(int n, int k) {
        StringBuilder s=new StringBuilder("0");
        for(int i=1;i<n;i++){
            String inverted=invert(s.toString());
            s.append("1").append(reverse(inverted));
        }
        return s.charAt(k-1);
    }
}