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
    string test;
 
    cin >> t;
 
    while(t>0){
        cin >> test;
 
        if(test=="YES" || test=="Yes" || test=="YEs" || test=="yES" || test=="YeS" || test=="yes" || test=="yEs" || test=="yeS"){
            YES
        }
        else{
            NO
        }
        t--;
    }
 
    return 0;
}
