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

    ll t, n, soma, good, ant;
    vll v;
    cin >> t;

    while(t!=0){
        cin >> n;
        
        ll in;
        ant=soma=good=0;
        for(ll i=0; i<n; i++){
            cin >> in;
            v.pb(in);
        }   
        for(ll i=0; i<n; i++){
            soma+=v[i];
            ant=max(ant, v[i]);
            if(soma-ant==ant){
                good++;
            }
        }     
        v.clear();
        
        cout << good << "\n";
        
        t--;
    }

    return 0;
}