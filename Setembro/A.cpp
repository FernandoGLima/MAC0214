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
    int n, in, j, l, sum;
    vetor vet;
 
    cin >> t;
 
    while(t>0){
        cin >> n;
 
        sum=0;
        for(int i=0; i<n; i++){
            cin >> in;
            vet.pb(in);
        }
 
        sort(all(vet));
 
        j=vet.size()-1;
        l=0;
        while(l!=j && l<j){
            sum+=vet[j]-vet[l];
            l++;
            j--;
        }
 
        cout << sum << "\n";
 
        vet.clear();
 
        t--;
    }
 
    return 0;
}
