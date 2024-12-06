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
    int fl;
    string ts;
    vector<string> td;
    map<string, ll>mp;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        fl=0;
        for(ll i=0; i<n; i++) cin >> ts, td.pb(ts), mp[ts]++;
        
        for(ll j=0; j<n; j++){
            for(ll i=0; i<=7; i++){
                if(i<(ll)td[j].size() && mp.count(td[j].substr(0, i))>0 && mp.count(td[j].substr(i, td[j].size()-1))>0){
                    cout << 1;
                    fl=1;
                    break;
                }
            }
            if(fl==0) cout << 0;
            fl=0;
        }
        cout << "\n";
 
        ts.clear();
        td.clear();
        mp.clear();
 
        t--;
    }
 
    return 0;
}