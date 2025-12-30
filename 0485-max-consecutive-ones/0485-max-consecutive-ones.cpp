class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,c=0;
        for(auto i:nums){
            if(i==1) c++;
            else{
                mx=max(mx,c);
                c=0;
            }
        }
        mx=max(mx,c);
        return mx;
    }
};