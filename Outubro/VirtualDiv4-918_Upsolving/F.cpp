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
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t, n, soma;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        vpll v(n);
 
        soma=0;
 
        for(auto &[b, a]: v) cin >> a >> b;
        sort(all(v));
 
        ordered_set<ll> setord;
 
        for(auto &[b, a]: v){
            soma+=setord.size()-setord.order_of_key(a);
            setord.insert(a);
        }
        cout << soma << "\n";
 
        t--;
    }
 
    return 0;
}
