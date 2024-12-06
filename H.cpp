#include <bits/stdc++.h>

#define MAC0214 std::ios_base::sync_with_stdio(false);
#define muito std::cout.tie(NULL);
#define coxa std::cin.tie(NULL);
#define ll long long
#define F first
#define S second
#define pb push_back
#define bc back 
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}
#define dbg(x) {cout << "x:" << x << '\n';}

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vvll = vector<vll>;
using vvpll = vector<vpll>;

void solve(){
    ll n, m, col, lin;
    ll salvai=-1, salvaj=-1;
    ll maxi=0, maxm=0, maxj=0;
    cin >> n >> m;
    vvll M(n, vll(m));
    ll largest = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            ll a; cin >> a;
            M[i][j] = a;
            largest = max(M[i][j],largest);
        }
    }
    for(int i=0; i<n; i++){
        maxm=0;
        for(int j=0; j<m; j++){
            if(M[i][j]==largest){
                maxm++;
            }
        }
        if(maxm>maxi){
            maxi=maxm;
            salvai=i;
        }
    }
    for(int j=0; j<m; j++){
        maxm=0;
        for(int i=0; i<n; i++){
            if(M[i][j]==largest){
                maxm++;
            }
            if(maxm>maxj){
                salvaj=j;
                maxj=maxm;
            }
        }
    }
    if(maxi>maxj){
        lin=salvai;
        
        for(int i = 0; i < n; i++){
            if(i==lin) continue;
            for(int j = 0; j < m; j++){
                largest = max(M[i][j],largest);
            }
        }
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(i==lin) continue;
                else if(M[i][j]==largest) col=j;
            }
        }

        cout << lin << " " << col << "\n";
    }
    else{
        col=salvaj;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(j==col) continue;
                largest = max(M[i][j],largest);
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(j==col) continue;
                else if(M[i][j]==largest) lin=i;
            }
        }

        cout << lin << " " << col << "\n";
    }
}

signed main(){
    MAC0214 muito coxa
    ll t=1;
    while(t--) solve();
    return 0;
}
