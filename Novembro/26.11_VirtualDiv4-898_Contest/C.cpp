#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define vll vector<ll>
#define pb push_back
#define bc back
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vvll vector<vll>
#define vvpll vector<vpll>
 
#define all(x) x.begin(),x.end()
 
#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}
 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
 
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve(){
    string st[10];
    int soma=0;
 
    for(int i=0; i<10; i++){
        cin >> st[i];
    }
 
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(st[i][j]=='X'){
                if(i==0 || i==9){
                    soma+=1;
                }
                else if(j==0 || j==9){
                    soma+=1;
                }
                else if(i==1 || i==8){
                    soma+=2;
                }
                else if(j==1 || j==8){
                    soma+=2;
                }
                else if(i==2 || i==7){
                    soma+=3;
                }
                else if(j==2 || j==7){
                    soma+=3;
                }
                else if(i==3 || i==6){
                    soma+=4;
                }
                else if(j==3 || j==6){
                    soma+=4;
                }
                else if(i==4 || i==5){
                    soma+=5;
                }
                else if(j==4 || j==5){
                    soma+=5;
                }
            }
        }
    }
 
    cout << soma << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
 
    cin >> t;
 
    while(t!=0){
        solve();
        t--;
    }
 
    return 0;
}
