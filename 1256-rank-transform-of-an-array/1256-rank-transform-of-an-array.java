class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int[] sorted = arr.clone();
        Arrays.sort(sorted);
        Map<Integer, Integer> mp = new HashMap<>();
        int c = 1;
        for (int i : sorted) {
            if (!mp.containsKey(i)) {
                mp.put(i, c++);
            }
        }
        int[] ans = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            ans[i] = mp.get(arr[i]);
        }
        return ans;
    }
}