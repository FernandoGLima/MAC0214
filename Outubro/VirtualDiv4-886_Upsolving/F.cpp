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

    ll t, n, max, div;
    vll vet;
    map<ll, int>mp;

    cin >> t;

    while(t!=0){
        cin >> n;

        for(ll i=0; i<n;i++){
            ll in;
            cin >>in;
            vet.pb(in);
        }

        sort(all(vet));
        for(ll i=0; i<n; i++){
            if(vet[i]<=n){
                div=n/vet[i];
                if(vet[i]<=n/2){
                    while(div!=0 && vet[i]*div>=n/2){
                        if(mp.count(vet[i]*div)>0){
                            mp[vet[i]*div]++;
                        }
                        else{
                            mp[vet[i]*div]=1;
                        }
                        div--;
                    }
                }
                else if(vet[i]>n/2){
                    if(mp.count(vet[i])>0) mp[vet[i]]++;
                    else mp[vet[i]]=1;
                }
            }
        }
        max=0;
        for(ll i=n/2; i<=n; i++){
            if(mp.count(i)>0 && mp[i]>max){
                max=mp[i];
            }
        }
        vet.clear();
        mp.clear();
        cout << max << "\n";

        t--;
    }

    return 0;
}