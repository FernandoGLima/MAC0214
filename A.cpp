#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, a, b, c;
 
    cin >> t;
 
    while(t!=0){
        cin  >> a >> b >> c;
 
        if(b>a){
            if(c>b){
                cout << "STAIR" << "\n";
            }
            else{
                if(b>c){
                    cout << "PEAK" << "\n";
                }
                else{
                    cout << "NONE" << "\n";
                }
            }
        }
        else{
                cout << "NONE" << "\n";
        }
            t--;
    }
 
    return 0;
}