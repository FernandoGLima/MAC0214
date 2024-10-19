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

    int t, m, s, in, soma, k, j;
    vetor vet;

    cin >> t;

    while(t!=0){
        cin >> m >> s;

        soma=k=0;
        j=1;
        for(int i=0; i<m; i++){
            cin >> in;
            vet.pb(in);
        }
        sort(all(vet));

        while(soma<s){
            if(k<vet.size() && j!=vet[k]){
                soma+=j;
            }
            else if(k<vet.size() && j==vet[k]){
                k++;
            }
            else if(k==vet.size()){
                soma+=j;
            }
            j++;
        }  

        if(soma==s){
            while(k<vet.size()){
                if(k<vet.size() && j!=vet[k]){
                    soma+=j;
                }
                else if(k<vet.size() && j==vet[k]){
                    k++;
                }
                j++;
            }
            if(soma==s){
                YES
            }
            else{
                NO
            }
        }
        else{
            NO
        }

        vet.clear();
        t--;
    }

    return 0;
}