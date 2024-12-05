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
 
    ll t, n, soma, l;

    cin >> t;
 
    while(t!=0){
        cin >> n;

        soma=0;
        for(ll i=0; i<n; i++){
            ll in; cin >> in;
            soma+=in;
        }
        l=sqrt(soma);
        if(l*l==soma) YES
        else NO
        
 
        t--;
    }
 
    return 0;
}