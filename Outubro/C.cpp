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

    ll t;
    string ts;
    char sla[8][8];
    cin >> t;

    while(t!=0){
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> sla[i][j];
            }
        }

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(sla[i][j]!='.'){
                    ts+=sla[i][j];
                }
            }
        }

        cout << ts << "\n";
        ts.clear();
        t--;
    
    }

    return 0;
}