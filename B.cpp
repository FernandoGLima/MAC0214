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

    ll t, n, k, salvai; 
    bool flag;

    cin >> t;

    while(t!=0){
        ll n, k;
        ll left=k-1, right=n-k;
        cin >> n >> k;

        if(n == 1){
            cout << 1 << '\n';
            cout << 1 << '\n';
            return;
        }
        if(left == 0 || right == 0 || (left%2!=right % 2)){
            cout << -1 << '\n';
            return;
        }
        if(l%2==1){
            cout << 3 << '\n';
            cout << 1 << ' ' << k << ' ' << k+1 << '\n';
        }
        else{
            cout << 5 << '\n';
            cout << 1 << ' ' << k-1 << ' ' << k << ' ' << k+1 << ' ' << k+2 << '\n';
        }

        t--;
    }

    return 0;
}