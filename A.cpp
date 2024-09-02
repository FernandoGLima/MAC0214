#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n; 
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        int vet[n];
 
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
 
        if(n>2){
            cout << "NO" << "\n";   
        }
        else{
            if(vet[0]-vet[1]==1 || vet[0]-vet[1]==-1){
                cout << "NO" << "\n";
            }
            else{
                cout << "YES" << "\n";
            }
        }
 
        t--;
    }
    return 0;
}