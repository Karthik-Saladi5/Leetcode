class Solution {
public:
    static bool comp(int a,int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
    string largestNumber(vector<int> &nums) {
        sort(nums.begin(),nums.end(),comp);
        string ans="";
        for(auto i:nums) ans+=to_string(i);
        if(ans[0]=='0') return "0";
        return ans;
    }
};