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
    ll n, k, mid, fim, in;

    cin >> t;

    while(t!=0){
        cin >> n >> k;

        in=1;
        fim=n-1;
        while(in<=fim){
            mid=(in+fim)/2;

            if(((k+mid)*mid)/2>((mid+1+n)*(n-mid))/2) fim=mid-1;
            else in=mid+1;
        }
        cout << min(abs((((k+fim)*fim)/2)-(((fim+1+n)*(n-fim))/2)), abs((((k+in)*in)/2)-(((in+1+n)*(n-in))/2)))<< "\n";

        t--;
    }

    return 0;
}