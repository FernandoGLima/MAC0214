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

    int t;
    ll n, u, z, qnts;  
    map<ll, ll>mp;
    map<ll, ll>mpx;
    map<ll, ll>mpy;
    vll vetx, vety;

    cin >> t;

    while(t!=0){
        cin >> n;

        u=z=qnts=0;
        for(ll i=0; i<n; i++){
            ll p; ll alt;
            cin >> p >> alt;

            mp[p]++;
            if(alt==1) u++, mpx[p], vetx.pb(p);
            else z++, mpy[p], vety.pb(p);
        }  

        for(auto &[k, val]: mp){
            if(val==2) qnts+=u-1+z-1;
        }
        sort(all(vetx)); sort(all(vety));

        for(ll i=0; i<(ll)vetx.size(); i++){
            if(mpy.count(vetx[i]-1)>0 && mpy.count(vetx[i]+1)>0) qnts++;
        }
        for(ll i=0; i<(ll)vety.size(); i++){
            if(mpx.count(vety[i]-1)>0 && mpx.count(vety[i]+1)>0) qnts++;
        }

        cout << qnts << "\n";

        t--;

        vetx.clear();
        mp.clear();
        vety.clear();
        mpx.clear();
        mpy.clear();
    }

    return 0;
}