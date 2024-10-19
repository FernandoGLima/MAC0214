#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
#define vll vector<ll>
#define pb push_back
#define bc back
 
#define all(x) x.begin(),x.end()
 
#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);                                 
                                                
    int d, a, b, c, flag=0;                           
    a=b=c=1;                                               
    cin >> d;                                       
    
    if(d>=10){
        cout << a << " " << b+1 << " " << c+2;
    }
    else{
        if(d==1 || d==2){
            cout << 4 << " " << 29 << " " << 100 << endl;
        }
        else{
            cout << 1 << " " << 100 << " " << 88 << endl;
        }
    }
 
    return 0;
}