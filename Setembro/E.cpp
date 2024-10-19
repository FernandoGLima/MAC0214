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

    ll t;
    ll n, h, h1reset, h2reset, salvagreen1, salvagreen2, derrotou;
    ll in;
    int blue, grenn;

    vetor vet;

    cin >> t;

    while(t!=0){
        cin >> n >> h;

        blue=1;
        grenn=2;
        derrotou=0;
        h1reset=h2reset=h;
        salvagreen1=salvagreen2=0;
        for(ll i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
        }

        sort(all(vet));

        for(ll i=0; i<n; i++){
            if(h>vet[i]){
                h+=floor((double)vet[i]/2);
            }
            else if(grenn==2){
                grenn--;
                h1reset=h;
                salvagreen1=i;
                h=h*2;
                if(h>vet[i]){
                    h+=floor((double)vet[i]/2);
                }
                else{
                    grenn--;
                    h2reset=h;
                    salvagreen2=i;
                    h=h*2;
                    if(h>vet[i]){
                        h+=floor((double)vet[i]/2);
                    }
                    else{
                        h=h*3;
                        if(h>vet[i]){ 
                            h+=floor((double)vet[i]/2);
                        }
                        else{
                            if(i==0){
                                derrotou=0;
                            }
                            else{
                                derrotou=i;
                            }
                            break;
                        }
                    }
                }
            }
            else if(grenn==1){
                grenn--;
                h2reset=h;
                salvagreen2=i;
                h=h*2;
                if(h>vet[i]){
                    h+=floor((double)vet[i]/2);
                }
                else{
                    h=h*3;
                    if(h>vet[i]){
                        h+=floor((double)vet[i]/2);
                    }
                    else{
                        derrotou=i;
                        break;
                    }
                }
            }
            else if(grenn==0 && blue==1){
                blue--;
                 h=h*3;
                if(h>vet[i]){
                    h+=floor((double)vet[i]/2);
                }
                else{
                    derrotou=i;
                    break;
                }
            }
            else{
                derrotou=i;
                break;
            }
        
            derrotou=i+1;
        }

        h=h2reset;
        h=h*3;
        grenn=1;
        for(ll i=salvagreen2; i<n; i++){
            if(h>vet[i]){
                h+=floor((double)vet[i]/2);
            }
            else if(grenn==1){
                grenn--;
                h=h*2;
                if(h>vet[i]){
                    h+=floor((double)vet[i]/2);
                }
                else{
                    if(i==0){
                        derrotou=0;
                    }
                    else{
                        if(i>derrotou){
                            derrotou=i;
                        }
                    }
                    break;
                }
            }
            else{
                if(i>derrotou){
                    derrotou=i;
                }
                break;
            }
            if(i+1>derrotou){
                        derrotou=i+1;
                    }
        }

        h=h1reset;
        h=h*3;
        grenn=2;
        for(ll i=salvagreen1; i<n; i++){
            if(h>vet[i]){
                h+=floor((double)vet[i]/2);
            }
            else if(grenn==2){
                grenn--;
                h=h*2;
                if(h>vet[i]){
                    h+=floor((double)vet[i]/2);
                }
                else{
                    grenn--;
                    h=h*2;
                    if(h>vet[i]){
                        h+=floor((double)vet[i]/2);
                    }
                    else{
                        if(i==0){
                        derrotou=0;
                        }
                        else{
                            if(i>derrotou){
                                derrotou=i;
                            }
                        }
                        break;
                    }
                }
            }
            else if(grenn==1){
                grenn--;
                h=h*2;
                if(h>vet[i]){
                    h+=floor((double)vet[i]/2);
                }
                else{
                    if(i>derrotou){
                        derrotou=i;
                    }
                    break;
                }
            }
            else{
                if(i>derrotou){
                        derrotou=i;
                    }
                    break;
            }
            if(i+1>derrotou){
                        derrotou=i+1;
                    }
        }
        vet.clear();
        cout << derrotou << "\n";
        
        t--;
    }

    return 0;
}