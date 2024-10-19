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

    ll t, n, in, flag1, p1, zer, uns, zerm, unsm;
    vll vet;

    cin >> t;

    while(t!=0){
        cin >> n;

        for(ll i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
        }
        p1=zer=flag1=uns=zerm=unsm=0;
        for(ll i=0; i<n; i++){
            if(flag1==0 && vet[i]==0){
                flag1=1;
            }
            else if(flag1==0 && vet[i]==1){
                zerm++;
            }
            else if(flag1==1){
                if(vet[i]==0){
                    zer++;
                }
            }
        }
        flag1=0;
        for(ll i=n-1; i>=0; i--){
            if(flag1==0 && vet[i]==1){
                flag1=1;
            }
            else if(flag1==0 && vet[i]==0){
                unsm++;
            }
            else if(flag1==1){
                if(vet[i]==1){
                    uns++;
                }
            }
        }

        for(ll i=0; i<n; i++){
            if(vet[i]==1){
                vet[i]=0;
                p1++;
            }
            else if(vet[i]==0){
                vet[i]=p1;
            }
        }
        p1=0;
        for(ll i=0; i<n; i++){
            p1+=vet[i];
        }

        if(max(uns-unsm, zer-zerm)<0){
            cout << p1 << "\n";
        }
        else{
            cout << p1+max(uns-unsm, zer-zerm) << "\n";
        }

        vet.clear();
      
        t--;
    }

    return 0;
}