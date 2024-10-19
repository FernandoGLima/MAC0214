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

    ll t;
    double a, b, c, ma, mi;

    cin >> t;

    while(t!=0){
        cin >> a >> b >> c;

        ma=max(a, b);
        mi=min(a, b);

        cout << (int)ceil((double)((ma-mi)/2)/c) << "\n";
        t--;
    }

    return 0;
}