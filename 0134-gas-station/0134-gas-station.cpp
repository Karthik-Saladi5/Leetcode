class Solution {
public:
    int canCompleteCircuit(vector<int>& petrol, vector<int>& distance) {
        int n=petrol.size();
        long long petrolSum =
            accumulate(petrol.begin(), petrol.end(), (long long)0);
        long long distanceSum =
            accumulate(distance.begin(), distance.end(), (long long)0);
        if (distanceSum > petrolSum)
            return -1;
        int mxInd = 0;
        long long cur = 0;
        for (int i = 0; i < n; i++) {
            cur += petrol[i] - distance[i];
            if (cur < 0) {
                cur = 0;
                mxInd = i + 1;
            }
        }
        return mxInd;
    }
};