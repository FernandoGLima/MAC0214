#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, n, max, salvai;
 
    vector<int> vet;
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        for(int i=0; i<=n; i++){
            vet.push_back(0);
        }
 
        for(int i=2; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(i*j<=n){
                    vet[i]=i*j+vet[i];
                }
                else{
                    break;
                }
            }
        }
 
        max=vet[0];
        for(int i=0; i<=n; i++){
            if(vet[i]>max){
                max=vet[i];
                salvai=i;
            }
        }
 
        cout << salvai << "\n";
        vet.clear();
        t--;
    }
 
    return 0;
}