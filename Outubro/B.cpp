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
    string test;

    cin >> t;

    while(t!=0){
        cin >> n;
        cin >> test;
        vll alph(26, 0);

        for(ll i=0; i<n; i++){
            alph[(int)test[i]-97]=1;
        }

        for(int i=25; i>=0; i--){
            if(alph[i]==1){
                cout << i+1 << "\n";
                break;
            }
        }

        alph.clear();
        test.clear();

        t--;
    }

    return 0;
}