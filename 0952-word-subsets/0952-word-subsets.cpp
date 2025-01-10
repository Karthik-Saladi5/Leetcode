class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<int> freq(26), tmp(26);
        int i;
        for (string b : B) {
            tmp = calc(b);
            for (i = 0; i < 26; ++i)
                freq[i] = max(freq[i], tmp[i]);
        }
        vector<string> res;
        for (string a : A) {
            tmp = calc(a);
            for (i = 0; i < 26; ++i)
                if (tmp[i] < freq[i])
                    break;
            if (i == 26) res.push_back(a);
        }
        return res;
    }

    vector<int> calc(string& word) {
        vector<int> freq(26);
        for (char c : word) freq[c - 'a']++;
        return freq;
    }
};