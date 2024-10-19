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

    ll t, n;
    vll di, si, ks;

    cin >> t;

    while(t!=0){
        cin >> n;

        for(int i=0; i<n; i++){
            ll in;
            ll in2;
            cin >> in >> in2;
            di.pb(in);
            si.pb(in2);
        }

        for(int i=0; i<n; i++){
            if(si[i]==1 || si[i]==2){
                ks.pb(di[i]);
            }
            else if(si[i]%2==0){
                ks.pb(((si[i]/2))+di[i]-1);
            }
            else ks.pb((si[i]/2)+di[i]);
        }
        sort(all(ks));
        cout << ks[0] << "\n";

        ks.clear();
        di.clear();
        si.clear();

        t--;
    }

    return 0;
}