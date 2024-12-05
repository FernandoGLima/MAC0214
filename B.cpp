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
    string ts;

    cin >> t;
 
    while(t!=0){
        
        for(int i=0; i<3; i++){
            cin >> ts;
            for(int j=0; j<3; j++){
                if(ts[j]=='?'){
                    if(j==0){
                        if((ts[1]=='A' && ts[2]=='B') || (ts[1]=='B' && ts[2]=='A')) cout << "C" << "\n";
                        else if((ts[1]=='B' && ts[2]=='C') || (ts[1]=='C' && ts[2]=='B')) cout << "A" << "\n";
                        else cout << "B" << "\n";
                    }
                    else if(j==1){
                        if((ts[0]=='A' && ts[2]=='B') || (ts[0]=='B' && ts[2]=='A')) cout << "C" << "\n";
                        else if((ts[0]=='B' && ts[2]=='C') || (ts[0]=='C' && ts[2]=='B')) cout << "A" << "\n";
                        else cout << "B" << "\n";
                    }
                    else{
                        if((ts[0]=='A' && ts[1]=='B') || (ts[0]=='B' && ts[1]=='A')) cout << "C" << "\n";
                        else if((ts[0]=='B' && ts[1]=='C') || (ts[0]=='C' && ts[1]=='B')) cout << "A" << "\n";
                        else cout << "B" << "\n";
                    }
                    break;
                }
            }
        }
        
 
        t--;
    }
 
    return 0;
}