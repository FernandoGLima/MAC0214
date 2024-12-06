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
    ll n, soma=0, l=0, lf;
    vll m;
 
    cin >> n;
 
    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        m.pb(in);
        soma+=in;
    }
 
    if(soma>n-1) NO
    else{
        YES
        while(m[l]!=0) l++;
        lf=n-1;
        for(ll i=l; i>=0; i--){
            while(m[i]>0){
                cout << i+1 << " " << lf+1 << "\n";
                lf--;
                m[i]--;
            }
        }
    }
}
 
signed main(){
    MAC0214 muito coxa
    ll t; t=1;
    while(t--) solve();
    return 0;
}