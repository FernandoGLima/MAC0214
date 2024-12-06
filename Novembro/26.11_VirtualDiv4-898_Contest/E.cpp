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
    ll n, x;
    vll v;
    ll ini, fim, meio;
    ll soma=0;
 
    cin >> n >> x;
 
    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        v.pb(in);
    }
 
    sort(all(v));
 
    ini=1;
    fim=x+v.bc();
    while(ini<fim){
        meio=(ll)ceil((double)(ini+fim)/2);
        for(ll i=0; i<n; i++){
            if(meio>v[i]) soma+=meio-v[i];
        }
        if(soma>x){
            fim=meio-1;
            soma=0;
        } 
        else{   
            ini=meio;
            soma=0;
        } 
    }
    cout << ini << "\n";
 
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