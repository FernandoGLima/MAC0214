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
    string ts;
    ll soma=0;
    vll as;
    bool e=false;
    ll qntsa=0;
 
    cin >> ts;
 
    for(ll i=0; i<ts.size(); i++){
        if(ts[i]=='B'){
            e=true;
            as.pb(qntsa);
            qntsa=0;
        }
        else{
            qntsa++;
        }
    }
    if(e==true){
        as.pb(qntsa);
        sort(all(as));
 
        for(ll i=1; i<as.size(); i++){
            soma+=as[i];
        }
 
        cout << soma << "\n";
    } 
    else cout << 0 << "\n";
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