#include <bits/stdc++.h>
#include <string>
#include <vector>

#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    ll n, q;
    ll R, G, B, Y, x, y;
    ll troca;
    vector<ll> leftB, leftR, leftG, leftY, rightB, rightR, rightY, rightG;
 
    cin >> t;
 
    while(t!=0){
        cin >> n >> q;
        R=G=B=Y=-1;
        string cidades[n];
        
        for(int i=0; i<n; i++){
            cin >> cidades[i];
            if(cidades[i][0]=='B'){
                B=i;
            }
            else if(cidades[i][0]=='G'){
                G=i;
            }
            else if(cidades[i][0]=='Y'){
                Y=i;
            }
            else{
                R=i;
            }
            if(cidades[i][1]=='B'){
                B=i;
            }
            else if(cidades[i][1]=='G'){
                G=i;
            }
            else if(cidades[i][1]=='Y'){
                Y=i;
            }
            else{
                R=i;
            }
            leftB.push_back(B);
            leftG.push_back(G);
            leftY.push_back(Y);
            leftR.push_back(R);
        }
        B=Y=G=R=-1;
        for(int i=n-1; i>=0; i--){
            if(cidades[i][0]=='B'){
                B=i;
            }
            else if(cidades[i][0]=='G'){
                G=i;
            }
            else if(cidades[i][0]=='Y'){
                Y=i;
            }
            else{
                R=i;
            }
            if(cidades[i][1]=='B'){
                B=i;
            }
            else if(cidades[i][1]=='G'){
                G=i;
            }
            else if(cidades[i][1]=='Y'){
                Y=i;
            }
            else{
                R=i;
            }
            rightB.push_back(B);
            rightG.push_back(G);
            rightY.push_back(Y);
            rightR.push_back(R);
        }

        for(int i=0; i<q; i++){
            cin >> x >> y;
            x=x-1;
            y=y-1;

            if(y>x){
                troca=x;
                x=y;
                y=troca;
            }

            if(x==y){
                cout << 0 << "\n";
            }
            else if(cidades[x][0]==cidades[y][0] || cidades[x][1]==cidades[y][1]){
                cout << x-y << "\n";
            }
            else{
                if(cidades[i][0]=='B'){
                B=i;
                }
                else if(cidades[i][0]=='G'){
                    G=i;
                }
                else if(cidades[i][0]=='Y'){
                    Y=i;
                }
                else{
                    R=i;
                }
                if(cidades[i][1]=='B'){
                    B=i;
                }
                else if(cidades[i][1]=='G'){
                    G=i;
                }
                else if(cidades[i][1]=='Y'){
                    Y=i;
                }
                else{
                    R=i;
                }
            }
        }
 
        t--;    
    }
    return 0;
}