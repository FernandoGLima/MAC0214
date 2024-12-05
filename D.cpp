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
    string ts;
    string resp;

    cin >> t;
 
    while(t!=0){
        cin >> n;
        cin >> ts;

        for(ll i=0; i<n; i+=2){
            resp+=ts.substr(i, 2);

            if(i+3<=n && (ts[i+3]!='a' && ts[i+3]!='e')){
                resp+=ts[i+2];
                i++;
                if(i+1==n-1) i=n;
                else resp+='.';
            }
            else if(i+2!=n){
                resp+='.';
            }
        }

        cout << resp << "\n";

        resp.clear();
        t--;
    }
 
    return 0;
}