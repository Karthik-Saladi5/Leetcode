class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n = nums.size();
        long long s = accumulate(nums.begin(), nums.end(), 0LL);
        s -= nums.back();
        long long mn = nums.back();
        long long ans = LLONG_MIN;
        for (int i = n - 2; i >= 0; i--) {
            ans = max(ans, s - mn);
            s -= nums[i];
            mn = min(mn, 1LL * nums[i]);
        }
        return ans;
    }
};