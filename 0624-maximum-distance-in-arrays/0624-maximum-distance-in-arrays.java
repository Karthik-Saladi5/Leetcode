class Solution {
    public int maxDistance(List<List<Integer>> arrays) {
        int ans = 0;
        int mn = arrays.get(0).get(0);
        int mx = arrays.get(0).get(arrays.get(0).size() - 1);
        for (int i = 1; i < arrays.size(); i++) {
            List<Integer> temp = arrays.get(i);
            int curMin = temp.get(0);
            int curMax = temp.get(temp.size() - 1);
            int d1 = Math.abs(curMax - mn);
            int d2 = Math.abs(mx - curMin);
            ans = Math.max(ans, Math.max(d1, d2));
            mn = Math.min(mn, curMin);
            mx = Math.max(mx, curMax);
        }
        return ans;
    }
}