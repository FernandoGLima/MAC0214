#include <bits/stdc++.h>
#include <cmath>

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

    int t;
    int n;
    string test;
    vetor vet;
    cin >> t;

    while(t!=0){
        cin >> n;
        
        for(int i=0; i<n; i++){
            cin >> test;
            for(int j=0; j<4; j++){
                if(test[j]=='#'){
                    vet.pb(j+1);
                }
            }
        }
        for(int i=n-1; i>=0; i--){
            cout << vet[i] << " ";
        }
        cout << "\n";
        vet.clear();
        
        t--;
    }

    return 0;
}