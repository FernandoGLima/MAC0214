#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define vetor vector<ll>
#define pb push_back
#define bc back

#define all(x) x.begin(),x.end()

#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, l, r, x,a , b;
    cin >> t;

    while(t!=0){
        cin >> l >> r >> x;
        cin >> a >> b;

        if(a==b){
            cout << 0 << "\n";
        }
        else{
            if(r-l<x){
                cout << -1 << "\n";
            }
            else{
                if(b>a){
                    if(b-a>=x){
                        cout << 1 << "\n";
                    }
                    else if(a-l>=x){
                        if(b-l>=x){
                            cout << 2 << "\n";
                        }
                        else if(r-b>=x){
                            cout << 3 << "\n";
                        }
                        else{
                            cout << -1 << "\n";
                        }
                    }
                    else if(r-a>=x){
                        if(r-b>=x){
                            cout << 2 << "\n";
                        }
                        else if(b-l>=x){
                            cout << 3 << "\n";
                        }
                        else{
                            cout << -1 << "\n";
                        }
                    }
                    else{
                        cout << -1 << "\n";
                    }
                }
                else{
                    if(a-b>=x){
                        cout << 1 << "\n";
                    }
                    else if(b-l>=x){
                        if(a-l>=x){
                            cout << 2 << "\n";
                        }
                        else if(r-a>=x){
                            cout << 3 << "\n";
                        }
                        else{
                            cout << -1 << "\n";
                        }
                    }
                    else if(r-b>=x){
                        if(r-a>=x){
                            cout << 2 << "\n";
                        }
                        else if(a-l>=x){
                            cout << 3 << "\n";
                        }
                        else{
                            cout << -1 << "\n";
                        }
                    }
                    else{
                        cout << -1 << "\n";
                    }
                }
            }
        }
        
        t--;
    }

    return 0;
}