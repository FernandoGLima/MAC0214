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

    ll t, flag=0;
    string yes;

    cin >> t;

    while(t!=0){
        cin >> yes;
        flag=0;
        if(yes.size()==1){
            if(yes[0]=='e' || yes[0]=='s' || yes[0]=='Y'){
                YES
                }
            else{
                    NO
                }
        }
        else{    
            for(int i=1; i<yes.size(); i++){
                if(yes[i]=='e'){
                    if(yes[i-1]!='Y'){
                        NO
                        flag=1;
                        break;
                    }
                }
                else if(yes[i]=='s'){
                    if(yes[i-1]!='e'){
                        NO
                        flag=1;
                        break;
                    }
                }
                else if(yes[i]=='Y'){
                    if(yes[i-1]!='s'){
                        NO
                        flag=1;
                        break;
                    }
                }
                else{
                    NO
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                YES
            }
        }
        
        t--;
    }

    return 0;
}