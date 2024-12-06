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
    ll n;
    bool flag=false;

    cin >> n;
    vll grau(n+1, 0);

    for(ll i=0; i<n-1; i++){
        ll in, in2; cin >> in >> in2;
        grau[in]++; grau[in2]++;
    }

    for(ll i=1; i<=n; i++){
        if(grau[i]>3){
            flag=true;
        }
    }
    if(flag) NO
    else YES
}

signed main(){
    MAC0214 muito coxa
    ll t=1;
    while(t--) solve();
    return 0;
}
