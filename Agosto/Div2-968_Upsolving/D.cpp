#include <bits/stdc++.h>
#include <vector>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t, flag;
  
    ll n, m, inputsize, input, number;

    vector<ll> vet;
    vector<ll> min;
    vector<ll> soma;

    cin >> t;
 
    while(t!=0){
        cin >> n >> m;
 
        for(ll i=0; i<n; i++){
            cin >> inputsize;
            for(ll j=0; j<inputsize; j++){
                cin >> input;
                vet.push_back(input);
            }

            sort(vet.begin(), vet.end());
            flag=0;
            number=0;

            for(ll j=0; j<(ll)vet.size(); j++){
                if(vet[j]!=number){
                    min.push_back(number);
                    flag++;
                    number++;
                    if(flag==2){
                        break;
                    }
                    if(vet[j]!=number){
                       min.push_back(number);
                        flag++; 
                        break;
                    }
                    else if(j<(ll)vet.size()-1 && vet[j]!=vet[j+1]){
                        number++;
                    }
                }
                else{
                    if(j<(ll)vet.size()-1 && vet[j]!=vet[j+1]){
                        number++;
                    }
                }
            } 
            if(flag==0){
                number++;
                min.push_back(number);
                number++;
                min.push_back(number);
            }
            else if(flag==1){
                number++;
                min.push_back(number);
            }
        
            vet.clear();

            if(min[1]>=m){
                soma.push_back((m+1)*min[1]);
            }
            else{
                soma.push_back((1+min[1])*min[1]+((m+min[1]+1)*(m-min[1]))/2);
            }   
           
            min.clear();
        }
        
        sort(soma.begin(), soma.end());

        cout << soma.back() << "\n";

        soma.clear();

        t--;
    }
 
    return 0;
}