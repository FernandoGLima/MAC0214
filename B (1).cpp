#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define ll long long
#define F first
#define S second
#define pb push_back
#define bc back 
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

void solve(){
    string s, sub = "happiness"; cin >> s;
    vector<ll> positions;
    ll pos = s.find(sub,0);
    while(pos != -1){
        positions.pb(pos);
        pos=s.find(sub,pos+1);
        if(positions.size() >= 3){
            NO 
            return;
        }
    }
    if(positions.size() == 2) {
        YES 
        cout << positions[0]+1 << ' ' << positions[1]+2 << '\n';
    }
    else if (positions.size()){
        YES 
        cout << positions[0]+1 << ' ' << positions[0]+2 << '\n';
    }
    else {
        YES
        cout << 0 << ' ' << 0 << '\n';
    }
}

signed main(){
    MAC0214 muito coxa
    ll t = 1;
    while(t--) solve();
    return 0;
}
