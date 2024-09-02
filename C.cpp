#include <iostream>
 
using namespace std;
 
#define ll long long
 
int main(){
    int t, flagshower, flagfirst;
    ll n, s, m, li, ri, riantes;
 
    cin >> t;
 
    while(t!=0){
        cin >> n >> s >> m;
 
        flagfirst=1;
        flagshower=0;
        while(n!=0){
            cin >> li >> ri;
 
            if(flagfirst==1){
                flagfirst=0;
 
                if(li>=s){
                    flagshower=1;
                }
 
                riantes=ri;
            }
            else{
                if((li-riantes)>=s){
                    flagshower=1;
                }
                riantes=ri;
            }   
            n--;
        }
        if((m-ri)>=s){
            flagshower=1;
        }
 
        if(flagshower==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
 
        t--;
    }
 
    return 0;
}