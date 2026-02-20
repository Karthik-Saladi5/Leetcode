class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        int ans = 0;
        for(int n : nums){
            while(!st.empty() && st.top() > n) {st.pop();}
            if(n == 0) continue;
            if(st.empty() || st.top()<n){
                ans++;
                st.push(n);
            }
        }
        return ans;
    }
};