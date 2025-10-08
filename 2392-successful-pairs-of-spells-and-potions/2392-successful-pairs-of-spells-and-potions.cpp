class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // sort(spells.begin(),spells.end());
        sort(potions.begin(),potions.end());
        vector<int> ans;
        for(auto s:spells){
            long long req=ceil(success*1.0/s);
            int ind=lower_bound(potions.begin(), potions.end(), req)-potions.begin();
            ans.push_back(potions.size()-ind);
        }
        return ans;
    }
};