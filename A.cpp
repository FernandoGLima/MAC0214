#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
#define vll vector<ll>
#define pb push_back
#define bc back
// for(ll &ai: a) cin >> ai;
 
#define all(x) x.begin(),x.end()
 
#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t, a, b,c;

    cin >> t;
 
    while(t!=0){
        cin >> a >> b>> c;

        if(a==b){
            cout << c << "\n";
        }
        else if(a==c){
            cout << b << "\n";
        }
        else{
            cout << a << "\n";
        }
        
 
        t--;
    }
 
    return 0;
}