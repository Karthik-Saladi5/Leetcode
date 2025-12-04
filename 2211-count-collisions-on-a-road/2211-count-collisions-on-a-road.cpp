class Solution {
public:
    int countCollisions(string directions) {
        int l=0,r=directions.size()-1;
        while(l<=r && directions[l]=='L') l++;
        while(r>=0 && directions[r]=='R') r--;
        int c=0;
        for(int i=l;i<=r;i++)
            if(directions[i]!='S') c++;
        return c;
    }
};