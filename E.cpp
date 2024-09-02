#include <bits/stdc++.h>
#include <cmath>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    ll a, b, c;
    ll altura, salvab, copiaalt, qntstem, qntstemsalvo;
    double alt, fract, intpart;
 
    cin >> t;
 
    while(t!=0){
        cin  >> a >> b >> c;
 
        salvab=b;
        altura=0;
        qntstem=1;
 
        if(a+1!=c){
            cout << -1 << "\n";
        }
        else{
            if(a==0){
                if(b>0){
                    cout << b << "\n";
                }
                else{
                    cout << 0 << "\n";
                }
            }
            else{
                alt=log2(a);
                fract = modf(alt, &intpart);
                if(fract==0){
                    alt=alt+1;
                    altura=(ll)alt;
                }
                else{
                    altura=(ll)ceil(alt);
                }
                copiaalt=altura;
                while(copiaalt!=0){
                    qntstem=qntstem*2;
                    copiaalt--;
                }
                qntstemsalvo=qntstem;
                qntstem=qntstem-a-1;
                salvab=salvab-qntstem;
                qntstem=qntstem+qntstemsalvo-2*qntstem;
                
                while(salvab>0){
                    salvab=salvab-qntstem;
                    altura++;
                }   
                cout << altura << "\n";
            }
        }
 
        t--;
    }
 
    return 0;
}