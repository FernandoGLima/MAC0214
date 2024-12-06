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
    ll n, q;
    vll c;
    ll ini, fim, meio;

    cin >> n >> q;

    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        c.pb(in);
    }

    sort(all(c));

    for(ll i=n-2; i>=0; i--){
        c[i]=c[i]+c[i+1];
    }

    sort(all(c));

    for(ll i=0; i<q; i++){
        ll qu; cin >> qu;
        ini=0;
        fim=n-1;
        while(ini<fim){
            meio=(ll)ceil((double)(ini+fim)/2);
            if(c[meio]>qu){
                fim=meio-1;
            } 
            else{   
                ini=meio;
            } 
        }
        if(ini==n-1){
            if(c[n-1]<qu){
                cout << -1 <<  "\n";
            }
            else{
                cout << ini+1 <<  "\n";
            }
        }
        else{
            if(qu>c[fim]) cout << fim+2 <<  "\n";
            else cout << fim+1 << "\n";
        }
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