class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        for(int i=0;i<nums1.size();i++){
            pq.push({nums1[i]+nums2[0],{i,0}});
        }
        while(!pq.empty() && k--){
            auto top=pq.top();
            int u=top.second.first;
            int v=top.second.second;
            ans.push_back({nums1[u],nums2[v]});
            pq.pop();
            if(v!=nums2.size()-1) pq.push({nums1[u]+nums2[v+1],{u,v+1}});
        }
        return ans;
    }
};