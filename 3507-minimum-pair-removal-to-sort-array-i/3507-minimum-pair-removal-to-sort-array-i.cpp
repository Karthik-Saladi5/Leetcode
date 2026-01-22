class Solution {
    bool isSorted(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }
public:
    int minimumPairRemoval(vector<int>& nums) {
        int c = 0;

        while (!isSorted(nums)) {
            int mnSum = nums[0] + nums[1];
            int ind = 0;

            for (int i = 1; i < nums.size() - 1; i++) {
                int sum = nums[i] + nums[i + 1];
                if (sum < mnSum) {
                    mnSum = sum;
                    ind = i;
                }
            }

            nums[ind] = mnSum;
            nums.erase(nums.begin() + ind + 1);
            c++;
        }
        return c;
    }
};