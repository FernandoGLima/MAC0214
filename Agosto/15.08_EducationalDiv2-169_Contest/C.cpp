#include <bits/stdc++.h>
#include <iostream>
#include <algorithm> 
#include <vector>
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    ll n, k, diferenca, input, restak;
    vector<ll>vetor;
 
    cin >> t;
 
    while(t!=0){
        cin >> n >> k;
        diferenca=0;
        restak=k;
        vetor.clear();
 
        for(int i=0; i<n; i++){
            cin >> input;
            vetor.push_back(input);
        }
 
        sort(vetor.begin(), vetor.end());
 
        for(int i=n-1; i>0; i=i-2){
            if(restak>0 && vetor[i]-vetor[i-1]>restak){
                diferenca=diferenca+(vetor[i]-(vetor[i-1]+restak));
                restak=0;
            }
            else if(restak>0 && vetor[i]-vetor[i-1]<=restak){
                restak=restak-(vetor[i]-vetor[i-1]);
            }
            else{
                diferenca=diferenca+(vetor[i]-(vetor[i-1]));
            }
        }
        if(n%2!=0){
            diferenca=vetor[0]+diferenca;
        }
        cout << diferenca << "\n";
 
        vetor.clear();
 
        t--;    
    }
    return 0;
}