#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    string test, test2;
    char a;
 
    cin >> t;
 
    while(t!=0){
        cin  >> test >> test2;
 
        a=test[0];
        test[0]=test2[0];
 
        test2[0]=a;
 
        cout << test << " " << test2 << "\n";
        t--;
    }
 
    return 0;
}