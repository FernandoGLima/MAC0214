#include <bits/stdc++.h>
#include <cmath>

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

    int t, flagin, flagfinal, flagfake;
    ll n;
    double x, intpart;
    string test;

    cin >> t;

    while(t!=0){
        cin >> n;

        x=sqrt(n);
        flagfinal=flagfake=0;
        flagin=1;

        if(modf(x, &intpart)==0){
            cin >> test;
            for(ll i=0; i<intpart; i++){
                if(i==intpart-1){
                    flagfinal=1;
                }
                for(ll j=0; j<intpart; j++){
                    if(flagin==1){
                        if(test[(i)*intpart+j]=='0'){
                            flagfake=1;
                            break;
                        }
                    }
                    else if(flagfinal==1){
                        if(test[(i)*intpart+j]=='0'){
                            flagfake=1;
                            break;
                        }
                    }
                    else if(j==0 || j==intpart-1){
                        if(test[(i)*intpart+j]=='0'){
                            flagfake=1;
                            break;
                        }
                    }
                    else if(test[(i)*intpart+j]=='1'){
                        flagfake=1;
                        break;
                    }
                }
                flagin=0;
                if(flagfake==1){
                    break;
                }
            }
            if(flagfake==1){
                NO
            }
            else{
                YES
            }
        }
        else{
            cin >> test;
            NO
        }

        
        t--;
    }

    return 0;
}