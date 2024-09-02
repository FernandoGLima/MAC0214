#include <bits/stdc++.h>
#include <string>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t , n;
    string test;

    cin >> t;
 
    while(t!=0){
        cin >> n;
        cin >> test;

        if(n>=2){
            if(test[0]!=test[n-1]){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
 
        t--;
    }
 
    return 0;
}