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
vll di={0, 0, -1, 1};
vll dj={-1, +1, 0, 0};
 
void solve(){
    ll n, m, mx;
    int flag=0;
 
    cin >> n >> m;
 
    vvll v(n);
    
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            ll in; cin >> in;
            v[i].pb(in);
        }
    }
 
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            flag=0; mx=0;
            for(ll k=0; k<4; k++){
                ll novoi=i+di[k];
                ll novoj=j+dj[k];
                if(novoi<0 || novoj<0 || novoi>=n || novoj>=m) continue;
                if(v[i][j]>v[novoi][novoj]){
                    mx=max(mx, v[novoi][novoj]);
                }    
                else flag=1;
            }
            if(flag==0) v[i][j]=mx;
        }
    }
 
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
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