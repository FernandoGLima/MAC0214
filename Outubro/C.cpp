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

    ll t, n, in, max, guarda;
    vll vet, comp;

    cin >> t;

    while(t!=0){
        cin >> n;
        max=-1;
        guarda=-1;
        for(ll i=0; i<n; i++) cin >> in, vet.pb(in), comp.pb(in);

        for(ll i=0; i<n; i++){
            if(vet[i]>max){
                max=vet[i];
                guarda=i;
            }
        }

        sort(all(comp));

        for(ll i=0; i<n; i++){
            if(guarda==i){
                cout << vet[i]-comp[n-2] << " ";
            }
            else{
                cout << vet[i]-comp[n-1] << " ";
            }
        }
        comp.clear();
        vet.clear();
        cout << "\n";
        t--;
    }

    return 0;
}