#include <bits/stdc++.h>
#include <string>
#define ll long long
 
using namespace std;
 
int main(){
   // ios_base::sync_with_stdio(false);
 //   cin.tie(NULL);
 
    int t, flag, flag2;
    ll n, p2;
    ll valor, salvai, zeravalor;
    string strings;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        ll vet[n];
 
        for(int i=0; i<n; i++){
            cin >> vet[i];
        }
        cin >> strings;
 
        p2=n-1;
        valor=0;
        flag2=1;
 
        for(int i=0; i<n; i++){
            if(strings[i]=='L'){
                flag2=0;
                while(strings[p2]!='R'){
                    p2--;
                    if(p2<i){
                        flag=1;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
                else{
                    salvai=i;
                    while(i<=p2){
                        valor=vet[i]+valor;
                        i++;
                    }
                    salvai++;
                    p2--;
                    break;
                }
            }
        }
        if(flag==0 && flag2==0){
            zeravalor=valor-vet[p2+1]-vet[salvai-1];
            
            for(int i=salvai; i<p2; i++){
                if(strings[i]=='L'){
                    while(strings[p2]!='R'){
                        zeravalor=zeravalor-vet[p2]; 
                        p2--;
 
                        if(p2<i){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1){
                        break;
                    }
                    else{     
                        valor=valor+zeravalor;
                        zeravalor=zeravalor-vet[p2]-vet[i]; 
                        p2--;
                    }
                }
                else{
                    zeravalor=zeravalor-vet[i];
                }
            }
        }
        cout << valor << "\n";
        flag=0;
        t--;
    }
 
    return 0;
}