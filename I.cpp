#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    ll x; cin >> x;
    bool tudoUm = 1, tudoPar = 1;
 
    for(ll i = 0; i < x;  i++){
        ll n; cin >> n;
        if(n % 2) tudoPar = 0;
        if(n != 1 && n != 0) tudoUm = 0;
    }
 
    if(tudoPar || tudoUm) cout << 1 << '\n';
    else cout << 2 << '\n';
 
    return 0;
}