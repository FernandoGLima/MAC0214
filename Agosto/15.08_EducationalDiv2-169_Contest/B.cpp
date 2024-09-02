#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, l, r, L, R; 
 
    cin >> t;
 
    while(t!=0){
        cin >> l >> r;
        cin >> L >> R;
 
        if(L==l && R==r){
            cout << (R-L) << "\n";
        }
        else if(L>r){
            cout << 1 << "\n";
        }
        else if(L==r){
            cout << 2 << "\n";
        }
        else if(R<l){
            cout << 1 << "\n";
        }
        else if(R==l){
            cout << 2 << "\n";
        }
        else if(L>l && R<r){
            cout << (R-L)+2 << "\n";
        }
        else if(L>l && R<=r){
            cout << (R-L)+1 << "\n";
        }
        else if(L>=l && R<r){
            cout << (R-L)+1 << "\n";
        }
        else if(L>=l && R<=r){
            cout << (R-L) << "\n";
        }
        else if(L<l && R>r){
            cout << (r-l)+2 << "\n";
        }
        else if(L<l && R>=r){
            cout << (r-l)+1 << "\n";
        }
        else if(L<=l && R>r){
            cout << (r-l)+1 << "\n";
        }
        else if(L<=l && R>=r){
            cout << (r-l) << "\n";
        }
        else if(L>l && R>r){
            cout << (r-L)+2 << "\n";
        }
        else if(L>=l && R>r){
            cout << (r-L)+1 << "\n";
        }
        else if(L<l && R<r){
            cout << (R-l)+2 << "\n";
        }
        else{
            cout << (R-l)+1 << "\n";
        }
 
        t--;
    }
    return 0;
}