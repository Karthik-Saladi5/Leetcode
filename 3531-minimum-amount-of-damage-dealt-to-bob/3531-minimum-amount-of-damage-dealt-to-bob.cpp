#define ll long long
class Solution {
    static bool custom(vector<ll> &a,vector<ll> &b,int power){
        ll A=a[0]*((b[1]+power-1)/power);
        ll B=b[0]*((a[1]+power-1)/power);
        return B<A;
    }
public:
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        ll n=damage.size();
        vector<vector<ll>> enemy;
        for(int i=0;i<n;i++) enemy.push_back({damage[i],health[i]});
        sort(enemy.begin(),enemy.end(),[&power](vector<ll> &a,vector<ll> &b){
            return custom(a,b,power);
        });
        ll total=0;
        ll cur=0;
        for(auto i:enemy) cur+=i[0];
        for(auto i:enemy){
            ll d=(i[1]+power-1)/power;
            total+=d*cur;
            cur-=i[0];
        }
        return total;
    }
};