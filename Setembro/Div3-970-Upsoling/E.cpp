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

    int t;
    string test;
    ll n, pri, sec, odda, evena, oddb, evenb;
    char a, b;
    map<char, int>mp;

    cin >> t;

    while(t!=0){
        cin >> n;
        cin >> test;

        if(n==1){
            cout << 1 << endl;
        }
        else{
            pri=sec=odda=oddb=evena=evenb=0;
            for(int i=0; i<n; i++){
                if(mp.count(test[i]>0)){
                    mp[test[i]]++;
                }
                else{
                    mp[test[i]]=1;
                }
            }

            for(int i=97; i<=122; i++){
                if(mp[(char)i]>pri){
                    if(pri>sec){
                        sec=pri;
                        b=(char)i;
                    }
                    pri=mp[(char)i];
                    a=(char)i;
                }
                else if(mp[(char)i]>sec){
                    sec=mp[(char)i];
                    b=(char)i;
                }
            }

            for(int i=0; i<n; i++){
                if(test[i]==a){
                if(i%2==0){
                    evena++;
                }
                else{
                    odda++;
                }
                }
                else if(test[i]==b){
                    if(i%2==0){
                    evenb++;
                }
                else{
                    oddb++;
                }
                }
            }

            if((evena-evenb)>(odda-oddb)){
                if(n%2!=0){
                    cout << n-(evena+oddb)+1 << "\n";
                }
                else{
                    cout << n-(evena+oddb) << "\n";
                }
            }
            else{
                if(n%2!=0){
                    cout << n-(evenb+odda)+1 << "\n";
                }
                else{
                    cout << n-(evenb+odda) << "\n";
                }
            }
        }
        
        t--;
    }

    return 0;
}