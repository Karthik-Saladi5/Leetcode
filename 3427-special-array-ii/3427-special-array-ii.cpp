class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        set<int> pos;
        for(int i=1;i<n;i++){
            if((nums[i]%2)==nums[i-1]%2) pos.insert(i);
        }
        vector<bool> ans;
        for(auto q:queries){
            int start=q[0],end=q[1];
            auto ind=pos.upper_bound(start);
            ans.push_back(!(*ind<=end && ind!=pos.end()));
        }
        return ans;
    }
};