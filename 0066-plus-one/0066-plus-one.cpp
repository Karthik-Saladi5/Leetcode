class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int c=1;
        for(int i=n-1;i>=0;i--){
            int s=digits[i]+c;
            if(s==10){
                digits[i]=0;
                c=1;
            }
            else{
                digits[i]=s;
                c=0;
                break;
            }
        }
        if(c==1) digits.insert(digits.begin(),1);
        return digits;
    }
};
