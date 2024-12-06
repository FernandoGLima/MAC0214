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
    int n, m, cost, s;
    
    cin >> n >> m;

    string ts[n];
    cost=1e9;

    for(int i=0; i<n; i++) cin >> ts[i];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            s=0;
            for(int k=0; k<m; k++){
                s+=abs(ts[i][k]-ts[j][k]);
            }
            if(s<cost) cost=s;
        }
    }

    cout << cost << "\n";
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