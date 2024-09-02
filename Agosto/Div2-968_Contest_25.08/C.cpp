#include <bits/stdc++.h>
#include <string>
#include <map>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;

    ll n, nsobe;
    string test;

    map<char, int>map;
  
    cin >> t;
 
    while(t!=0){
        cin >> n;
        cin >> test;

        nsobe=0;
        
        for(int i=97; i<123; i++){
            map[(char)i]=0;
        }  

        for(int i=0; i<n; i++){
            map[test[i]]++;
        }

        while(n!=0){
            for(int i=97; i<123; i++){
                if(map[(char)i]>0){
                    test[nsobe]=(char)i;
                    nsobe++;
                    n--;
                    map[(char)i]--;
                }
            }  
        }

        cout << test << "\n";

        t--;
    }
 
    return 0;
}