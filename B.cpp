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
    ll n, si, sp, im, p;
    vll nums;
 
    cin >> n;
 
    for(ll i=0; i<n; i++){
        ll in; cin >> in;
        nums.pb(in);
    }   
 
    im=p=si=sp=0;
    for(ll i=0; i<n; i++){
        if(i%2==0){
            p++;
            sp+=nums[i];
        }
        else{
            im++;
            si+=nums[i];
        }
    }
    if(sp%p==0 && (sp/p)==(si/im) && si%im==0) YES
    else NO
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