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
    ll n, k;
    string ts;
    ll min, cont;
 
    cin >> n >> k;
    cin >> ts;
 
    cont=min=0;
    for(ll i=0; i<n; i++){
        if(ts[i]=='B'){
            for(ll j=0; j<k; j++){
                if(ts[i+j]=='B'){
                    ts[i+j]='W';
                }
            }
            min++;
        }
    }
 
    cout << min << "\n";
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