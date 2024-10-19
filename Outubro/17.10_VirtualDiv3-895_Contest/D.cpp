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

    ll t, n, x, y, sumx, sumy, dx, dy, mm, cont;
    vll vet;

    cin >> t;

    while(t!=0){
        cin >> n >> x >> y;

        sumx=sumy=0;
        cont=0;
        if(x==y){
            cout << 0 << "\n";
        }
        else if(x==1){
            sumx=((1+n)*n)/2;

            dy=n/y;
            
            sumy=((1+(dy))*dy)/2;
        
             cout << sumx-sumy << "\n";
        }
        else if(y==1){
            sumy=((1+n)*n)/2;

            dx=n/x;

            sumx=(((n-dx+1)+n)*dx)/2;

            cout << sumx-sumy << "\n";
        }
        else{
            mm=lcm(x, y);
            dx=n/x;
            dy=n/y;

            cont=n/mm;
            
            dx-=cont;
            dy-=cont;
            
            sumx=(((n-dx+1)+n)*dx)/2;
            
            sumy=((1+(dy))*dy)/2;

            cout << sumx-sumy << "\n";
        }
        t--;
    }

    return 0;
}