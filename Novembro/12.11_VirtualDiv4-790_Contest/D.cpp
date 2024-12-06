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
    ll n, m;
    cin >> n >> m;
    ll m[n][m];
    ll cn, cm, sd;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> m[i][j];
        }
    }

    for(int i=0; i<1; i++){
        for(int j=0; j<m; j++){
            cn=i;
            cm=j;
            while(cn<n && cm<m){
                sd+=m[cn][cm];
                cn++; cm++;
            }
            cn=i;
            cm=j;
            while(cn<n && cm<m){
                sd+=m[cn][cm];
                cn++; cm++;
            }
        }
    }
    for(int i=1; i<n; i++){
            cn=i;
            cm=0;
            while(cn<n && cm<m){
                sd+=m[cn][cm];
                cn++; cm++;
            }
            dd.pb(sd);
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