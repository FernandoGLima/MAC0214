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
    ll rest=0, cont=0, seis=0, aux=0;

    cin >> ts;
   
    for(auto &c:ts){
        rest+=c-'0';
        if((c-'0')==2) cont++;
        if(c=='3') seis++;
        rest %= 9;
    }
    
    for(int i=0; i<=min(cont, 9LL); i++){
        aux=i*2+rest;
        aux%=9;
        for(int j=0; j<=min(seis, 6LL); j++){
            if((aux+j*6)%9==0){
                YES
                return;
            }
        }
    }
    NO
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