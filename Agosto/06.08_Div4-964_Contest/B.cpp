#include <iostream>
 
using namespace std;
 
#define ll long long
 
 
void bubblesort(int arr[], int n){
    int i, j;
 
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
 
 
int main(){
    int t, a1, a2, b1, b2, total=0, ajuda[4];
 
    cin >> t;
 
    while (t!=0){
        cin >> a1 >> a2 >> b1 >> b2;
 
        ajuda[0]=a1;
        ajuda[1]=a2;
        ajuda[2]=b1;
        ajuda[3]=b2;
 
        bubblesort(ajuda, 4);
 
        if(a1==a2 && a2==b1 && b1==b2){
            total=0;
        }
        else if(a1==a2 && a2==b1 && b2>b1){
            total=0;
        }
        else if(a1==a2 && a2==b2 && b1>b2){
            total=0;
        }
        else if(b1==b2 && b2==a1 && a2>a1){
            total=4;
        }
        else if(b1==b2 && b2==a2 && a1>a2){
            total=4;
        }
        else if(a1==b1 && a2==b2){
            total=0;
        }
        else if(a1==b2 && a2==b1){
            total=0;
        }
        else if(a1==ajuda[3] && a2==ajuda[1]){
            if(ajuda[1]==ajuda[2]){
                total=4;
            }
            else{
                total=2;
            }
        }
        else if(a2==ajuda[3] && a1==ajuda[1]){
            if(ajuda[1]==ajuda[2]){
                total=4;
            }
            else{
                total=2;
            }
        }
        else if((a1==ajuda[3] && a2==ajuda[2]) || (a2==ajuda[3] && a1==ajuda[2])){
            total=4;
        }
        else{
            total=0;
        }
 
        cout << total << endl;
 
        t--;
    }
}