#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    int t; 
    ll a, x;
 
    cin >> t;
 
    while(t!=0){
        cin >> a;
 
        if(a<100){
            cout << "NO" << "\n";
        }
        else if(a < 1000){
                x=a%10;
                a=a/10;
 
                if(a==10){
                    if(x>=2){
                        cout << "YES" << "\n";
                    }
                    else{
                        cout << "NO" << "\n";
                    }
                }
                else{
                    cout << "No" << "\n";
                }
        }
        else{
                x=a%10;
                a=a/10;
                x=(a%10)*10+x;
                a=a/10;
 
                if(a==10){
                    if(x>=10){
                        cout << "YES" << "\n";
                    }
                    else{
                        cout << "NO" << "\n";
                    }
                }
                else{
                    cout << "No" << "\n";
                }
        } 
 
        t--;
    }
    return 0;
}