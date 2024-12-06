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

    ll t, m, n, l, r, q, ini, fim;
    vll li, ri, op;
    int flag;

    cin >> t;

    while(t!=0){
        cin >> n >> m;
        vll zer(n+1, 0);

        for(ll i=0; i<m; i++) cin >> l >> r, li.pb(l), ri.pb(r);

        cin >> q;

        for(ll i=0; i<q; i++) cin >> r, op.pb(r);

        fim=q;
        ini=flag=0;

        while(ini<fim){
            ll meio=(ini+fim)/2;
            cout << "out" << " " << ini << " " << meio << " " << fim << "\n";

            for(ll i=0; i<n; i++) zer[i]=0;

            for(ll i=0; i<meio; i++) zer[op[i]]=1;

            for(ll i=1; i<=n; i++) zer[i]+=zer[i-1];

            for(ll i=0; i<m; i++){
                cout << zer[ri[i]]-zer[li[i]] << " " << (ri[i]-li[i]+1)/2 << "\n";
                if(zer[ri[i]]-zer[li[i]]>(ri[i]-li[i]+1)/2){
                    flag=1;
                }
            }
            if(flag==1){
                fim=meio-1;
                flag=0;
            }
            else{
                ini=meio+1;
            }
        }

        if(fim==q){
            cout << -1 << "\n";
        }
        else{
            cout << ini << "\n";
        }
        zer.clear();
        ri.clear();
        li.clear();
        op.clear();
        t--;
    }

    return 0;
}