#include <bits/stdc++.h>
#include <string>
#include <map>
#define ll long long
 
using namespace std;
 
int main(){
    int t, flag;
    ll n, m;
    string strings;
    map<char, int> mp;
    map<int, char> pam;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        ll templates[n];
 
        for(int i=0; i<n; i++){
            cin >> templates[i];
        }
 
        cin >> m;
 
        for(int i=0; i<m; i++){
            cin >> strings;
            
            if((long long)strings.size()==n){
                for(int j=0; j<n; j++){
                    if(mp.count(strings[j])==0 && pam.count(templates[j])==0){
                            mp[strings[j]]=templates[j];
                            pam[templates[j]]=strings[j];
                    }
                    else{
                        if(mp[strings[j]]!=templates[j] || pam[templates[j]]!=strings[j]){
                            cout << "NO" << "\n";
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0){
                    cout << "YES" << "\n";
                }
            }
            else{
                cout << "NO" << "\n";
            }
            flag=0;
            mp.clear();
            pam.clear();
        }
 
        t--;
    }
 
    return 0;
}