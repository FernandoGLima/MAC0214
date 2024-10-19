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

    ll t;
    int n, a, b, max, ij;

    cin >> t;

    while(t!=0){
        cin >> n;
        max=-1;
        ij=0;

        for(ll i=0; i<n; i++){
            cin >> a >> b;
            if(a<=10){
                if(b>max){
                    max=b;
                    ij=i+1;
                }
            }
        }

        cout << ij << "\n";
        
        t--;
    }

    return 0;
}