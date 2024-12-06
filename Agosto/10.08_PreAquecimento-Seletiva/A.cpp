#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n; 
    ll m[2], f;
    cin >> n >> f;
    while(n!=0){
        cin >> m[0] >> m[1];
        if(m[0]>=m[1] && f>=m[0]){
            f=f+m[0];
        }
        else if(f>=m[1]){
            f=f+m[1];
        }
        else if(f>=m[0]){
            f=f+m[0];
        }
        else{
            cout << "N\n";
            break;
        }
        n--;
        if(n==0){
            cout << "S\n";
        }
    }
 
    return 0;
}