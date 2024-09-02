#include <iostream>
#include <string>

using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, flag;

    ll n, m, itop, jtop, ibot;

    cin >> t;

    while(t!=0){
        cin >> n >> m;

        string vet[n];

        flag=0;

        ibot=itop=jtop=0;

        for(int i=0; i<n; i++){
            cin >> vet[i];
        }

        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                if(vet[i][j]=='#'){
                    itop=i;
                    jtop=j;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                flag=0;
                break;
            }
        }

        for(ll i=n-1; i>=0; i--){
            for(ll j=m-1; j>=0; j--){
                if(vet[i][j]=='#'){
                    ibot=i;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                flag=0;
                break;
            }
        }

        if(itop==ibot){
            cout << itop+1 << " " << jtop+1 << "\n";
        }
        else{
            cout << (((ibot-itop)/2)+1)+itop << " " << jtop+1 << "\n";
        }

        t--;
    }

    return 0;
}