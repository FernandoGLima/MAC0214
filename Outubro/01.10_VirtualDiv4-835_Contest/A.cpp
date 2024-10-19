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

    ll t, a, b, c;
    vll mid;

    cin >> t;

    while(t!=0){
        cin >> a >> b >> c;

        mid.pb(a);
        mid.pb(b);
        mid.pb(c);

        sort(all(mid));

        cout << mid[1] << "\n";

        mid.clear();

        t--;
    }

    return 0;
}