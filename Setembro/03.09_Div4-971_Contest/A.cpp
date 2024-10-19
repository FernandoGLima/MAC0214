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

    int t, a, b, c, min;

    cin >> t;

    while(t!=0){
        cin >> a >> b;

        min=1000;
        for(int i=a; i<=b; i++){
            if((i-a)+(b-i)<min){
                min=(i-a)+(b-i);
            }
        }     

        cout << min << "\n";   

        
        t--;
    }

    return 0;
}