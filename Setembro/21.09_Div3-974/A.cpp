#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vetor vector<ll>
#define pb push_back
#define bc back

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    int n, k, in, p, ouro;
    vetor vet;

    cin >> t;

    while(t!=0){
        cin >> n >> k;
        p=0;
        ouro=0;

        for(int i=0; i<n; i++){
            cin >> in;
            if(in>=k){
                ouro+=in;
            }
            else{
                if(ouro>0 && in==0){
                    ouro-=1;
                    p++;
                }
            }
        }

        cout << p << "\n";

        
        t--;
    }

    return 0;
}