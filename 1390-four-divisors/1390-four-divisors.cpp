class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int n : nums) {
            int c = 0;
            int s = 0;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    int j = n / i;
                    c++;
                    s += i;
                    if (i != j) {
                        c++;
                        s += j;
                    }
                    if (c > 4)
                        break;
                }
            }
            if (c == 4)
                sum += s;
        }
        return sum;
    }
};