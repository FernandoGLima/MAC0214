#include <bits/stdc++.h>
#include <vector>
#include <map>  
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, numero, maior; 
    map<int, int>mp;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
        maior=0;
 
        for(int i=1; i<=n; i++){
            mp[numero]=0;
        }
 
        for(int i=1; i<=n; i++){
            cin >> numero;
            mp[numero]++;
        }
 
        maior=mp[1];
        for(int i=2; i<=n; i++){
            if(mp[i]>maior){
                maior=mp[i];
            }
        }
 
        
        cout << n-maior << "\n";
 
        mp.clear();
 
        t--;
    }
    return 0;
}