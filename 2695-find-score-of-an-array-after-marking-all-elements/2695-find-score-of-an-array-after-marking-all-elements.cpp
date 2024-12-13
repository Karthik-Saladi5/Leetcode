class Solution {
    // struct Compare{
    //     bool operator()(pair<int,int> &a,pair<int,int> &b){
    //         if(a.first==b.first) return a.second>b.second;
    //         return a.first>a.second;
    //     }
    // };
public:
    long long findScore(vector<int>& nums) {
        // pair<int,int> a;
        int n=nums.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<bool> marked(n,0);
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        } 
        long long sum=0;
        while(!pq.empty()){
            auto i=pq.top();
            pq.pop();
            int ind=i.second;
            int val=i.first;
            if(marked[ind]) continue;
            sum+=val;
            marked[ind]=1;
            if(ind>0) marked[ind-1]=1;
            if(ind<n-1) marked[ind+1]=1;
        }
        return sum;
    }
};