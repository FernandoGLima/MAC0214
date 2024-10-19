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

    ll t, x, y, z, k, r, c, max;

    cin >> t;
    while(t!=0){
        cin >> x >> y >> z >> k;
        
        r=0;
        max=0;
        for(ll i=1; i<=x; i++){
            for(ll j=1; j<=y; j++){
                c=k/(i*j);
                if(c<=z && c*i*j==k){
                    r=(x-i+1)*(y-j+1)*(z-c+1);
                    if(r>max) max=r;
                }
            }
        }

        cout << max << "\n";
        
        t--;
    }

    return 0;
}