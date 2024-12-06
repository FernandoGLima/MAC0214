#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define bc back
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vvll vector<vll>
#define vvpll vector<vpll>

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n, q, salvaL, salvaR, salvaK, max, sl, sr;
    map<ll, ll> mp;

    cin >> n >> q;

    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        mp[in]++;
    }

    salvaL=salvaR=max=sl=sr=-1;
    for(auto &[k, val] :mp){
        if(val>=q){
            if(salvaL==-1){
                salvaL=salvaR=k;
                salvaK=k;
            }
            else if(k-salvaK==1){
                salvaR=k;
                salvaK=k;
            }
            else{
                if(salvaR-salvaL>max){
                    max=salvaR-salvaL;
                    sl=salvaL;
                    sr=salvaR;
                }
                salvaK=k;
                salvaL=k;
            }
        }
    }
    if(salvaR-salvaL>max){
        max=salvaR-salvaL;
        sl=salvaL;
        sr=salvaR;
    }

    if(sl==-1) cout << -1 << "\n";
    else cout << sl << " " << sr << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
 
    cin >> t;
 
    while(t!=0){
        solve();
        t--;
    }
 
    return 0;
}