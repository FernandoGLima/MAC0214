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

    ll t, n, soma;

    cin >> t;

    while(t!=0){
        cin >> n;

        soma=0;
        for(ll i=0; i<2*n; i++){
            ll in; cin >> in;
            soma+=in;
        }   
        if(soma%2==0) cout << 0 << " ";
        else cout << 1 << " ";

        if(soma<=n) cout << soma << "\n";
        else cout << (2*n)-soma << "\n";

        t--;
    }

    return 0;
}