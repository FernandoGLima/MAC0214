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
    vll arv, maca;
    ll max;
    ll l, r, j;
    ll soma;
 
    cin >> n >> k;
 
    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        maca.pb(in);
    }
    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        arv.pb(in);
    }
 
    l=r=max=j=0;
    soma=maca[0];
    if(soma<=k && max<r-l+1) max=r-l+1;
    
    for(ll i=1; i<n; i++){
        if(arv[i-1]%arv[i]==0){
            soma+=maca[i];
            if(soma>k){
                if(soma-maca[i]<=k && max<r-l+1) max=r-l+1;
                j=l;
                while(soma>k){
                    soma=soma-maca[j];
                    j++;
                }
                l=j;
                r=i;
            }
            else{
                r++;   
            }
        }
        else{
            if(soma<=k && max<r-l+1) max=r-l+1;
            soma=maca[i];
            r=i;
            l=i;
            j=i;
            if(soma<=k && max<r-l+1) max=r-l+1;
        }
    }  
    if(soma<=k && max<r-l+1) max=r-l+1;
    
    cout << max << "\n";
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