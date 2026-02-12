class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int freq[26] = {};
            int mx = 0, dist = 0;
            for (int j = i; j < n; ++j) {
                int ind = s[j] - 'a';
                dist += (freq[ind] == 0);
                mx = max(mx, ++freq[ind]);
                if (j - i + 1 == dist * mx)
                    ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};