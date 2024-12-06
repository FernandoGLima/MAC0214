#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
vector<ll> v;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    ll x; cin >> x;
 
    for(ll i = 0; i < x;  i++){ll n; cin >> n; v.push_back(n);}
    sort(v.begin(), v.end());
 
    ll preco, valor = 0;
 
    for(ll i = 0; i < x; i++){
        if(v[i] * (x - i) > valor){
            preco = v[i];
            valor = v[i] * (x-i);
        }
    }
 
    cout << preco << ' ' << valor << '\n';
 
    return 0;
}