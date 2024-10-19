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
    int a, b, c;

    cin >> t;

    while(t!=0){
        cin >> a >> b>> c;

        if(a+b>=10){
            YES
        }
        else if(a+c>=10){
            YES
        }
        else if(b+c>=10){
            YES
        }
        else{
            NO
        }

        t--;
    }

    return 0;
}