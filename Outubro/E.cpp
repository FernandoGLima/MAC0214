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

    ll t, n, in, a, b, c, cn, resul;
    vll vet;

    cin >> t;

    while(t!=0){
       cin >> n>> cn;

        a=b=c=0;
        for(ll i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
            a+=4;
            c+=in*in;
            b+=(2*in+2*in);
        }
        c=c-cn;
        c=c/(4*n);
        b=b/(4*n);
        a=a/(4*n);
        resul=(((-1)*b)+(ll)sqrt((b*b)-4*a*c))/(2*a);

        vet.clear();

        cout << resul << "\n";
      
        t--;
    }

    return 0;
}