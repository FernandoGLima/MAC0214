#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vll vector<ll>
#define pb push_back
#define bc back

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, max, min, to;

    cin >> t;
    while(t!=0){
        cin >> n;
        min=1001;
        max=-1;
        to=0;
        for(ll i=0; i<n; i++){
            ll in;
            cin >> in;
            if(in>max){
                max=in;
            }
            if(in<min){
                min=in;
            }
            
        }
        for(ll i=1; i<n; i++){
            to+=max-min;
            
        }

        cout << to << "\n";
        t--;
    }

    return 0;
}