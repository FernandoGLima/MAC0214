#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, flag;
    ll n, p1, p2, troca;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        ll passageiros[n];
        flag=0;
 
        for(int i=0; i<n; i++){
            cin >> passageiros[i];
        }
 
        p1=passageiros[0];
        p2=passageiros[1];
 
        if(n==1){
            cout << "YES" << "\n";
        }
        else if(p1==1){
            if(p2-p1!=1){
                cout << "NO" << "\n";
                flag=1;
            }
            if(flag==0){
                for(int i=2; i<n; i++){
                    if(passageiros[i]-p2!=1){
                        cout << "NO" << "\n";
                        flag=1;
                        break;
                    }
                    else{
                        p2=passageiros[i];
                    }
                }
                if(flag==0){
                    cout << "YES" << "\n";    
                }
            }
        }
        else if(p1==n){
            if(p2-p1!=-1){
                cout << "NO" << "\n";
                flag=1;
            }
            if(flag==0){
                for(int i=2; i<n; i++){
                    if(passageiros[i]-p2!=-1){
                        cout << "NO" << "\n";
                        flag=1;
                        break;
                    }
                    else{
                        p2=passageiros[i];
                    }
                }
                if(flag==0){
                    cout << "YES" << "\n";    
                }
            }
        }
        else{
            if(p1-p2!=1 && p1-p2!=-1){
                cout << "NO" << "\n";
                flag=1;
            }
 
            if(p1<p2){
                troca=p1;
                p1=p2;
                p2=troca;
            }
            if(flag==0){
                for(int i=2; i<n; i++){
                    if(passageiros[i]>p1){
                        if(passageiros[i]-p1!=1){
                            cout << "NO" << "\n";
                            flag=1;
                            break;
                        }
                        else{
                            p1=passageiros[i];
                        }
                    }
                    else{
                        if(p2-passageiros[i]!=1){
                            cout << "NO" << "\n";
                            flag=1;
                            break;
                        }
                        else{
                            p2=passageiros[i];
                        }
                    }        
                }
                if(flag==0){
                    cout << "YES" << "\n";
                }
            }
        }
 
        t--;
    }
 
 
    return 0;
}   