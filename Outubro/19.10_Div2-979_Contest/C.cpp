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

    ll t, n, troca, zero, uns, flag, ganou;
    string ts;

    cin >> t;
    while(t!=0){
        cin >> n;

        cin >> ts;
        zero=uns=0;
        troca=0;
        flag=ganou=0;
        if(ts[0]=='1') ganou++;
        for(ll i=1; i<n; i++){
            if(ts[i-1]=='1' && ts[i]=='0'){
                troca++;
            }
            else if(ts[i-1]=='0' && ts[i]=='1'){
                troca++;
            }
            if(ts[i-1]=='1' && ts[i]=='1'){
                flag=1;
                break;
            }
            if(ts[i]=='1'){
                uns++;
            }
            else{
                zero++;
            }
        }
        if(ts[n-1]=='1') ganou++;

        ts.clear();
        if(troca%2==0 && uns!=n && flag==0 && ganou==0){
            NO
        }
        else YES;

        t--;
    }

    return 0;
}