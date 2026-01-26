class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mn = INT_MAX;
        vector<vector<int>> ans;
        for (int i = 1; i < arr.size(); i++) {
            int d = arr[i] - arr[i - 1];
            if (d < mn) {
                mn = d;
                ans = {};
                ans.push_back({arr[i - 1], arr[i]});
            } else if (d == mn)
                ans.push_back({arr[i - 1], arr[i]});
        }
        return ans;
    }
};