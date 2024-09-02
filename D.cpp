#include <bits/stdc++.h>

using namespace std;

#define ll unsigned int

#define vetor vector<ll>
#define pb push_back
#define bc back

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

vetor vet, blacks;
string s;
vector<bool> visitss;

int blackss(ll i, ll qnts){
    if(visitss[i]==true){
        return qnts;
    }
    else{
        if(s[i-1]=='0'){
            qnts++;
        }
        visitss[i]=true;
        qnts=blackss(vet[i], qnts);
        blacks[i]=qnts;
        return qnts;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll n, input;

    cin >> t;

    while(t!=0){
        cin >> n;
        vet.pb(-1);
        visitss.pb(-1);
        blacks.pb(0);
        for(ll i=1; i<=n; i++){
            cin >> input;
            vet.pb(input);
            visitss.pb(false);
            blacks.pb(0);
        }
        cin >> s;

        for(ll i=1; i<=n; i++){
            if(visitss[i]==false){
                blacks[i]=blackss(i, 0);
                cout << blacks[i] <<" ";
            }
            else{
                cout << blacks[i] << " ";
            }
        }
        cout << "\n";
        
        vet.clear();
        vet.shrink_to_fit();
        visitss.clear();
        visitss.shrink_to_fit();
        blacks.clear();
        blacks.shrink_to_fit();
        s.clear();
        s.shrink_to_fit();

        t--;
    }

    return 0;
}