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

    ll t, n, in, p1, p2;
    vll vet;
    int flag, fl;

    cin >> t;

    while(t!=0){
        cin >> n;

        for(ll i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
        }
        
        if(n==1){
            YES
        }
        else{
            p1=vet[0];
            flag=fl=0;
            for(ll i=1; i<n; i++){
                p2=vet[i];
                if(flag==0 && p2>p1){
                    flag=1;
                }
                else if(flag==1){
                    if(p2<p1){
                        fl=1;
                        break;
                    }
                }
                p1=p2;
            }
            if(fl) NO
            else YES
        }

        vet.clear();

        t--;
    }

    return 0;
}