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

    int t, a, b;

    cin >> t;

    while(t!=0){
        cin >> a >> b;

        if(a==0 && b%2!=0){
            NO
        }
        else if(a%2!=0 && b==0){
            NO
        }
        else if(a%2==0 && b%2==0){
            YES
        }
        else if(a%2!=0 && b%2==0){
            NO
        }
        else if(a%2==0 && b%2!=0){
            YES
        }
        else{
            NO
        }
        
        t--;
    }

    return 0;
}