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
    bool flag;
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        vll v(n), ac(n+1, 0); flag=false;
        
        for(ll &in:v) cin >> in;
 
        for(ll i=1; i<=n; i++){
            if(i%2!=0 && i<n)v[i]=(-1)*v[i];
            ac[i]=ac[i-1]+v[i-1];
        }
        sort(all(ac));
        for(ll i=0; i<n; i++)if(ac[i]==ac[i+1])flag=true;
 
        if(flag) YES
        else NO
        ac.clear(); v.clear();
        t--;
    }
 
    return 0;
}
