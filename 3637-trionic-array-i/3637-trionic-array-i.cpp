class Solution {
public:
    bool isTrionic(vector<int>& arr) {
        if(arr[0]>=arr[1]) return 0;
        int c=0,sign=1;
        for(int i=1;i<arr.size();i++){
            int d=arr[i]-arr[i-1];
            if(!d) return 0;
            if(d*sign<0){
                sign*=-1;
                c++;
            }
        }
        return c==2;
    }
};