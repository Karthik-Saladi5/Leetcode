class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int> freq;
        for(auto i:nums){
            int r=(i%value);
            if(r>=0) r;
            else r=value-abs(r);
            // cout<<r<<endl;
            freq[r]++;
        }
        for(int i=0;i<=max(n,value);i++){
            if(freq[i]>1 && i+value<=n) freq[i+value]+=freq[i]-1;
            if(freq[i]==0) return i;
        } 
        return n+2;
    }
};