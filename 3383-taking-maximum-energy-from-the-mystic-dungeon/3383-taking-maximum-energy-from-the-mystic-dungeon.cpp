class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        vector<int> pre(n,0);
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(i+k>=n) pre[i]=energy[i];
            else pre[i]=pre[i+k]+energy[i];
            mx=max(mx,pre[i]);
        }
        return mx;
    }
};