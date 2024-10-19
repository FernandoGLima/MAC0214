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
    int n, in;
    int nm;
    string test;
    vetor vet;
    cin >> t;
 
    while(t>0){
        cin >> n;
 
        for(int i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
        }
        
        for(int i=0; i<n; i++){
            cin >> nm;
            cin >> test;
            for(int l=0; l<nm; l++){
                if(test[l]=='D'){
                    if(vet[i]==9){
                        vet[i]=0;
                    }
                    else{
                        vet[i]++;
                    }
                }
                else{
                    if(vet[i]==0){
                        vet[i]=9;
                    }
                    else{
                        vet[i]--;
                    }
                }
            }
        }
 
        for(int i=0; i<n; i++){
            cout << vet[i] << " ";
        }
        cout << "\n";
        vet.clear();
        test.clear();
        t--;
    }
 
    return 0;
}