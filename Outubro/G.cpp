#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vll vector<ll>
#define pb push_back
#define bc back

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, value;
    vll x, y;
    map<ll, ll> h, v, di, div;

    cin >> t;

    while(t!=0){
        cin >> n;

        value=0;
        for(ll i=0; i<n; i++){
            ll ix, iy;
            cin >> ix >> iy;
            v[ix]++;
            h[iy]++;
            di[ix-iy]++;
            div[ix+iy]++;
        }
        for(auto &[k, val]: h){
            value+=val*(val-1);
        }
        for(auto &[k, val]: di){
            value+=val*(val-1);
        }
        for(auto &[k, val]: div){
            value+=val*(val-1);
        }
        for(auto &[k, val]: v){
            value+=val*(val-1);
        }

        cout << value << "\n";

        v.clear();
        h.clear();
        di.clear();
        div.clear();
        
        t--;
    }

    return 0;
}