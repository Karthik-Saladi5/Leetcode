class Solution {
    int bfs(int day, int city, vector<vector<int>>& score, int k,
            vector<vector<int>>& stayScore, vector<vector<int>>& travelScore,
            int n) {
        if (day == k)
            return 0;
        if (score[day][city] != -1)
            return score[day][city];
        int mx = stayScore[day][city] +
                 bfs(day + 1, city, score, k, stayScore, travelScore, n);
        for (int i = 0; i < n; i++) {
            if (i != city)
                mx = max(mx,
                         travelScore[city][i] + bfs(day + 1, i, score, k,
                                                   stayScore, travelScore, n));
        }
        score[day][city] = mx;
        return mx;
    }

public:
    int maxScore(int n, int k, vector<vector<int>>& stayScore,
                 vector<vector<int>>& travelScore) {
        vector<vector<int>> score(k + 1, vector<int>(n, -1));
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = max(ans, bfs(0, i, score, k, stayScore, travelScore, n));
        return ans;
    }
};