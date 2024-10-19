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
    ll n, in, max, j, pessoas, soma; 
    double media, media2;

    vetor vet;

    cin >> t;

    while(t!=0){
        cin >> n;
        
        max=j=pessoas=soma=media2=media=0;
        for(ll i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
            soma+=in;
            if(in>max){
                max=in;
                j=i;
            }
        }
        if(n<=2){
            cout << -1 << "\n";
        }
        else{
            media=(double)soma/n;
            media2=(double)(media)/2;

            for(ll i=0; i<n; i++){
                if(vet[i]<media2){
                    pessoas++;
                }
            }

            if(pessoas>floor((double)n/2)){
                cout << 0 << "\n";
            }
            else{
                sort(all(vet));
                cout << (2*n*vet[floor((double)n/2)])+1-soma << "\n";
            }
        }

        vet.clear();

        t--;
    }

    return 0;
}