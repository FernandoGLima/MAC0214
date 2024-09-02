#include <bits/stdc++.h>
#include <vector>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;

    ll n, input;
    vector<ll> vet;
  
    cin >> t;
 
    while(t!=0){
        cin >> n;   

        for(ll i=0; i<n; i++){
            cin >> input;
            vet.push_back(input);
        }

         sort(vet.begin(), vet.end()); 

        for(ll i=0; i<n-1; i++){
            if(i%2!=0){
                vet.pop_back();
            }
        }
        
        cout << vet.back() << "\n";

        vet.clear();

        t--;
    }
 
    return 0;
}