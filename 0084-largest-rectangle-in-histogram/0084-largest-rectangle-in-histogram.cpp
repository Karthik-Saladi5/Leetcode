class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st;
        int ans=0;
        heights.push_back(0);
        for(int i=0;i<heights.size();i++){
            int start=i;
            while(!st.empty() && st.top().second>heights[i]){
                auto [ind,height]=st.top();
                st.pop();
                ans=max(ans,height*(i-ind));
                start=ind;
            }
            st.push({start,heights[i]});
        }
        return ans;
    }
};