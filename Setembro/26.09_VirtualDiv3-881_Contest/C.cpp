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
 
    ll t, n, sum;
 
    cin >> t;
 
    while(t>0){
        cin >> n;
 
        sum=0;
 
        while(n!=0){
            sum+=n;
            n=n/2;
        }
        cout << sum << "\n";
        t--;
    }
 
    return 0;
}
