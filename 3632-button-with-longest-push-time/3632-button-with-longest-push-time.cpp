class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int prev=0;
        int mxInd=0,time=0;
        for(auto i:events){
            if(i[1]-prev>time || (i[1]-prev==time && i[0]<mxInd)){
                time=i[1]-prev;
                mxInd=i[0];
            }
            prev=i[1];
        }
        return mxInd;
    }
};