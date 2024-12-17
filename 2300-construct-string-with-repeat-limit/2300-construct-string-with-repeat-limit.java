class Solution {
    public String repeatLimitedString(String s, int repeatLimit) {
        int[] freq = new int[26];
        for (char c : s.toCharArray())
            freq[c - 'a']++;
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> b[0] - a[0]);
        for (int i = 0; i < 26; i++)
            if (freq[i] > 0)
                pq.add(new int[] { i, freq[i] });
        StringBuilder ans = new StringBuilder();
        while (!pq.isEmpty()) {
            int[] cur = pq.poll();
            int use = Math.min(repeatLimit, cur[1]);
            ans.append(String.valueOf((char) ('a' + cur[0])).repeat(use));
            cur[1] -= use;
            if (cur[1] > 0 && !pq.isEmpty()) {
                int[] next = pq.poll();
                ans.append((char) ('a' + next[0]));
                next[1]--;
                if (next[1] > 0)
                    pq.add(next);
                pq.add(cur);
            }
        }
        return ans.toString();
    }
}