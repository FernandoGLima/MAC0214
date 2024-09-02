#include <iostream>
#include <string>

using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, ehbom;

    ll n, sum, acimasum, input, qnts;

    cin >> t;

    while(t!=0){
        cin >> n;

        sum=qnts=ehbom=acimasum=0;

        cin >> input;
        if(input==0){
            qnts++;
        }
        sum=sum+input;
        for(int i=1; i<n; i++){
            cin >> input;
            if(input==0 && ehbom==1){
                qnts++;
            }
            if(input>sum){
                sum=sum+input;
                if(acimasum!=0 && acimasum==(sum-acimasum)){
                    qnts++;
                    ehbom=1;
                }
                else{
                    ehbom=0;
                }
            
                acimasum=input;
            }
            else{
                if(input==sum){
                    qnts++;
                    ehbom=1;
                    sum=sum+input;
                    if(acimasum==(sum-acimasum) && acimasum!=input){
                        qnts++;
                        acimasum=0;
                    }
                }
                else{
                    ehbom=0;
                    sum=sum+input;
                    if(acimasum==(sum-acimasum)){
                        qnts++;
                        ehbom=1;
                        acimasum=0;
                    }
                }
            }
        }

        cout << qnts << "\n";

        t--;
    }

    return 0;
}