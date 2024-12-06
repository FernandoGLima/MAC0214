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
    ll n, m, indc=0; 
    string ts; 
    set<ll> st;

    cin >> n >> m;
    cin >> ts;

    for(ll i=0; i<m; i++){
        ll in; cin >> in; 
        in--;
        st.insert(in);
    }

    vector<char> letras(m);
    
    for(char &pl: letras){
        cin >> pl;
    } 
    sort(all(letras));

    for(ll i: st){
        ts[i]=letras[indc++];
    } 

    cout << ts << '\n';
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