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

    ll t, n;
    string ts;

    cin >> t;
    while(t!=0){
        cin >> n;

        for(ll i=0; i<n; i++){
            if(i==1){
                ts+='1';
            }
            else{
                ts+='0';
            }
        }
        cout << ts << "\n";
        ts.clear();
        t--;
    }

    return 0;
}