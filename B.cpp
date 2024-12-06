#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n;
    string nome;
 
    cin >> n;
 
    for (int i = 0; i < n; i++){
        cin >> nome;
        string nomeNovo = "";
        for (int j = 0; j < nome.size(); j++){
            nomeNovo += nome[j];
 
            if (nome[j] != nome[j+1]){
                nomeNovo += nome[j];
            }
 
            while (nome[j] == nome[j+1]){
                nomeNovo += nome[j];
                j++;
            }
        }
 
        cout << nomeNovo << "\n";
    }
    return 0;
}