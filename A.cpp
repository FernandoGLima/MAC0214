#include <iostream>
 
using namespace std;
 
#define ll long long
 
int main(){
    int t, n, soma, primeiro;
 
    cin >> t;
 
    while(t!=0){
        cin >> n;
 
        primeiro=n%10;
        soma=primeiro+(n/10);
 
        cout << soma << endl;
 
        soma=0;
 
        t--;
    }
 
    return 0;
}