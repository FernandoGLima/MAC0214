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
 
    ll t, n;
    ll in, sum, op;
    bool flag;
    cin >> t;
 
    while(t>0){
        cin >> n;
 
        flag=sum=op=0;
        for(ll i=0; i<n; i++){
            cin >> in;
            
            if(flag==0){
                if(in<0){
                    flag=1;
                    in=-1*in;
                    op++;
                }
                sum+=in;
            }
            else{
                if(in>0){
                    flag=0;
                    sum+=in;
                }
                else{
                    in=-1*in;
                    sum+=in;
                }
            }
        }
 
        cout << sum << " " << op << "\n";
        t--;
    }
 
    return 0;
}