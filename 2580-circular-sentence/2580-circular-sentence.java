class Solution {
    public boolean isCircularSentence(String sentence) {
        for(int i=0;i<sentence.length()-1;i++){
            if(sentence.charAt(i+1)==' ' && (sentence.charAt(i)!=sentence.charAt(i+2))) return false;
        }
        return sentence.charAt(0)==sentence.charAt(sentence.length()-1);
    }
}