class Solution {
public:
    int numSub(string s) {
        int c = 0, ans = 0, mod = 1e9 + 7;
        for (char a : s) {
            if (a == '1') {
                c++;
            } else {
                c = 0;
            }
            ans = (ans + c) % mod;
        }
        return ans;
    }
};