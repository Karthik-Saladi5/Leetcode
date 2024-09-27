
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(nums[i] + i, mx);
            if (!nums[i]) {
                if (i + 1 == n)
                    return 1;
                else if (mx == i)
                    return 0;
            }
        }
        return 1;
    }
};