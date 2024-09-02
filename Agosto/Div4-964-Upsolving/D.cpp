#include <iostream>
#include <string.h>
 
using namespace std;
 
#define ll long long
 
int main(){
    int t, j=0;
    string s, ti;
 
    cin >> t;
 
    while(t!=0){
        cin >> s >> ti;
        
        j=0;
        for(int i=0; i<size(s); i++){
            if(s[i]==ti[j]){
                j++;
            }
            if(s[i]=='?' && j<size(ti)){
                s[i]=ti[j];
                j++;
            }
            else if(s[i]=='?'){
                s[i]='a';
            }
        }

        if(j>=size(ti)){
            cout << "YES" << endl;
            cout << s << endl;
        }
        else{
            cout << "No" << endl;
        }
 
        t--;
    }
 
    return 0;
}