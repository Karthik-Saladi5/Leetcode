class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        if(s&1) return 0;
        int c=0,cur=0;
        for(auto i:nums){
            cur+=i;
            if(cur%2==(s-cur)%2 && cur!=s) c++;
            // cout<<cur<<" "<<c<<endl;
        }
        return c;
    }
};