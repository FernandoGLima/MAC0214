#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vetor vector<ll>
#define pb push_back
#define bc back

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll l, r, x, cont, i, qnts;

    cin >> t;

    while(t!=0){
        cin >> l >> r;

        if(l==r){
            cout << 1 << "\n";
        }
        else{
            qnts=1;
            cont=1;
            x=l;
            while(x<r){
                x=x+cont;
                cont++;
                qnts++;
            }
            if(x>r){
                qnts--;
            }
            cout << qnts << "\n";
        }
        
        t--;
    }

    return 0;
}