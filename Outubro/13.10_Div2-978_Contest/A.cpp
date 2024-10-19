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

    ll t, n, r, happy, single;

    cin >> t;

    while(t!=0){
        cin >> n >> r;

        happy=0;
        single=0;
        for(ll i=0; i<n; i++){
            int in;
            cin >> in;
            if(in%2==0){
                happy+=in;
                r=r-(in/2);
            }
            else{
                happy+=in-1;
                r=r-((in-1)/2);
                single++;
            }
        }
        if(r>=single){
            happy+=single;
        }
        else if(single!=0){
            while(r<single){
                r--;
                single=single-2;
            }
            happy=happy+single;
        }

        cout << happy << "\n";

        t--;
    }

    return 0;
}