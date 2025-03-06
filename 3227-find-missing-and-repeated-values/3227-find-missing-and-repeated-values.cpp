class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> freq;
        for(auto i:grid){
            for(auto j:i) freq[j]++;
        }
        int dup=0;
        int sum=0;
        for(auto i:freq){
            if(i.second>=2){
                dup=i.first;
                // break;
            }
            sum+=i.first;
        }
        int n=freq.size()+1;
        int mis=((n*(n+1))/2)-sum;
        return {dup,mis};
    }
};