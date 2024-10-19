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
    int n;
    ll bal=0;
    string test;
 
    cin >> t;
 
    while(t>0){
        vetor vet(26, 1);
        cin >> n;
        cin >> test;
 
        bal=0;
        for(ll i=0; i<n; i++){
            if(vet[test[i]-65]==1){
                vet[test[i]-65]=0;
                bal=bal+2;    
            }
            else{
                bal+=1;
            }
        }
 
        cout << bal << "\n";
        vet.clear();
 
        t--;
    }
 
    return 0;
}
