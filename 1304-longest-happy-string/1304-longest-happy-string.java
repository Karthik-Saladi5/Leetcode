class Solution {
    public String longestDiverseString(int a, int b, int c) {
        StringBuilder ans = new StringBuilder();

        int ca = 0, cb = 0, cc = 0;
        int n = a + b + c;
        for (int i = 0; i < n; i++) {
            if ((a >= b && a >= c && ca != 2) || ((cb == 2 || cc == 2) && a > 0)) {
                ans.append("a");
                a--;
                ca++;
                cb = 0;
                cc = 0;
            } else if ((b >= a && b >= c && cb != 2) || ((ca == 2 || cc == 2) && b > 0)) {
                ans.append("b");
                b--;
                cb++;
                ca = 0;
                cc = 0;
            } else if ((c >= a && c >= b && cc != 2) || ((ca == 2 || cb == 2) && c > 0)) {
                ans.append("c");
                c--;
                cc++;
                ca = 0;
                cb = 0;
            }
        }
        return ans.toString();
    }
}