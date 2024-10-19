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

    ll t;
    ll n, k, sub, pares;

    cin >> t;

    while(t!=0){
        cin >> n >> k;
        pares=0;
        sub=n-(k-1);

        if(n==sub+1){
            NO
        }
        else if(sub%2==0 && n%2==0){
            if((int)ceil((double)(n-sub-1)/2)%2==0){
                YES
            }
            else{
                NO
            }
        }
        else if(sub%2!=0 && n%2!=0){
            if((int)ceil((double)(n-sub-1)/2)%2!=0){
                YES
            }
            else{
                NO
            }
        }
        else{
            if(((n-sub-1)/2)%2==0){
                NO
            }
            else{
                YES
            }
        }

        t--;
    }

    return 0;
}