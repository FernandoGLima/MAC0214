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

    ll t, n, x, customer, vira4, ult, j, cont;
    vll vet;
    cin >> t;

    while(t!=0){
        ll n, x;
        ll atual, soma=0, mx=-1;

        cin >>n >> x;
        

        for(ll i = 0; i < n; i++){
            cin >> atual;
            soma+=atual;
            mx=max(mx, atual);
        } 
        
        cout << max((soma+x-1)/x, mx) << '\n';
        
        t--;
    }

    return 0;
}