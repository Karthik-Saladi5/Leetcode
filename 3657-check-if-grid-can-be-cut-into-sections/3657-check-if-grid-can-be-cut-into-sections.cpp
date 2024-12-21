class Solution {
    // struct Range{
    //     int start;
    //     int end;
    // };
    // static bool compare(const Range &a,const Range &b){
    //     if(a.start==b.start) return a.end<b.end;
    //     return a.start<a.end;
    // }
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        stack<pair<int,int>> st;
        vector<pair<int,int>> x,y;
        for(auto rec: rectangles){
            pair<int,int> temp;
            temp.first=min(rec[0],rec[2]);
            temp.second=max(rec[0],rec[2]);
            x.push_back(temp);
            temp.first=min(rec[1],rec[3]);
            temp.second=max(rec[1],rec[3]);
            y.push_back(temp);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        for(int i=0;i<x.size();i++){
            if(st.empty()){
                st.push(x[i]);
            }
            else{
                pair<int,int> peak=st.top();
                st.pop();
                if(x[i].first==peak.first){
                    peak.second=max(x[i].second,peak.second);
                    st.push(peak);
                }
                else if(peak.second>x[i].first){
                    peak.second=max(x[i].second,peak.second);
                    st.push(peak);
                }else{
                    st.push(peak);
                    st.push(x[i]);
                } 
            }
        }
        if(st.size()>=3) return 1;
        while(!st.empty()) st.pop();
        for(int i=0;i<y.size();i++){
            if(st.empty()){
                st.push(y[i]);
            }
            else{
                pair<int,int> peak=st.top();
                st.pop();
                if(y[i].first==peak.first){
                    peak.second=max(y[i].second,peak.second);
                    st.push(peak);
                }
                else if(peak.second>y[i].first){
                    // st.push(peak);
                    peak.second=max(y[i].second,peak.second);
                    st.push(peak);
                }else{
                    st.push(peak);
                    st.push(y[i]);
                }
            }
        }
        if(st.size()>=3) return 1;
        while(!st.empty()){
            cout<<st.top().first<<" "<<st.top().second<<endl;
            st.pop();
        }
        return 0;
    }
};