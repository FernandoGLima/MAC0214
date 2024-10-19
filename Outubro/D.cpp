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

    ll t, n, k, in, max, max2;
    int flag;
    vll vet, aux;

    cin >> t;

    while(t!=0){
        cin >> n >> k;
        flag=0;

        for(ll i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
            if(i>0 && abs(vet[i]-vet[i-1])>k){
                flag=1;
            }
        }

        if(flag==0){
            cout << 0 << "\n";
        }
        else{
            sort(all(vet));
            max=1;
            max2=0;
            for(ll i=1; i<n; i++){
                if(abs(vet[i]-vet[i-1])<=k){
                    max++;   
                }
                else{
                    if(max2<max){
                        max2=max;
                    }
                    max=1;
                }
            }
            if(max2<max){
                max2=max;
            }
            cout << n-max2 << "\n";
        }

        vet.clear();
        aux.clear();
        
        t--;
    }

    return 0;
}