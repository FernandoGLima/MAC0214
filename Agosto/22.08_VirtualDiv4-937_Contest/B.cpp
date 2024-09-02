#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, n, muda, change;
 
    cin >> t;
 
    while(t!=0){
        cin >>n;
        muda=0, change=0;
 
        for(int j=0; j<2*n; j++){
            if(change==2 || change==3){
                for(int i=0; i<2*n; i++){
                    if(muda==2 || muda==3){
                        cout << "#";
                        if(muda==3){
                            muda=0;
                        }
                        else{
                            muda++;
                        }
                    }
                    else{
                        cout << ".";
                        muda++;
                    }
                }
                muda=0;
                change++;
                cout << "\n";
            }
            else{
               for(int i=0; i<2*n; i++){
                    if(muda==2 || muda==3){
                        cout << ".";
                        if(muda==3){
                            muda=0;
                        }
                        else{
                            muda++;
                        }
                    }
                    else{
                        cout << "#";
                        muda++;
                    }
                }
                muda=0;
                change++;
                cout << "\n"; 
            }
            if(change==4){
                change=0;
            }
        }
 
        t--;
    }
 
    