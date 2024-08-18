class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int c=0,z=0,o=0,i=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='0') z++;
            else o++;
            while(z>k && o>k){
                if(s[i]=='0')z--;
                else o--;
                i++;
            }
            c+=j-i+1;
        }
        return c;
    }
};