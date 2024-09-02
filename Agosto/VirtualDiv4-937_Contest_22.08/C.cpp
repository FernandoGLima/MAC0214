
#include <bits/stdc++.h>
#include <iostream>
#include <string>
 
#define ll long long
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    string input, horas, resto, output;
    int hora;
 
    cin >> t;
 
    while(t!=0){
        cin  >> input;
 
        hora=stoi(input.substr(0, 2));
 
        if(hora>12){
            hora=hora-12;
 
            horas=to_string(hora);
 
            resto=input.substr(2, input.length()-1);
 
            if(hora>=10){
                 output=horas+resto+" PM";
            }
            else{
                 output="0"+horas+resto+" PM";
            }
        }
        else if(hora==12){
            output=input+" PM";
        }
        else{
            if(hora==0){
                hora=12;
 
                horas=to_string(hora);
 
                resto=input.substr(2, input.length()-1);
 
                
                output=horas+resto+" AM";
 
            }
            else{
                output=input+" AM";   
            }
        }
 
        cout << output << "\n";
        
        t--;
    }
 
    return 0;
}