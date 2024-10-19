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
    cin.tie(NULL);                                  //so soma
                                                    //so sub
    int d, a, b, c, flag=0;                           //so divide 3
    a=b=c=1;                                                //so divide 2
    cin >> d;                                       //so multiplica
                                                    //1 - MULTIPLICA, 2 - (SOMA, SUBTRAI, DIVIDE)
    for(int i=1; i<=100; i++){                      //1- soma, 2 -(sub, mult, div)
        for(int j=1; j<=100; j++){                  //sub 1 forma, 2-(ad, mult, div)
            for(int k=1; k<=100; k++){              // sub 2 forma, 2-(ad, mult, div)
                if(k!=i && k!=j && j!=i && k!=d && i!=d && j!=d){
                    if(
                        (i+j)+k!=d && (i+j)!=d && (i+k)!=d && (j+k)!=d &&//+2+3
                        (i-j)-k!=d && (i-j)!=d && (i-k)!=d && (j-k)!=d && (j-i)!=d && (k-i)!=d && (k-j)!=d &&//-2-3
                        (i/j)/k!=d && (j/i)/k!=d && (i/k)/j!=d && (k/i)/j!=d && (j/k)/i!=d && (k/j)/i!=d &&//D3
                        (i/j)!=d && (j/i)!=d && (i/k)!=d && (k/i)!=d && (j/k)!=d && (k/j)!=d &&//D2
                        (i*j*k)!=d && (i*j)!=d && (i*k)!=d && (j*k)!=d && //M
                        (i*j)+k!=d && (i*k)+j!=d && (j*k)+i!=d && (i*j)-k!=d && (i*k)-j!=d && (j*k)-i!=d && (i*j)/k!=d && (i*k)/j!=d && (j*k)/i!=d &&//M , DPS-2
                        (i+j)*k!=d && (i+k)*j!=d && (j+k)*i!=d && (i+j)-k!=d && (i+k)-j!=d && (j+k)-i!=d && (i+j)/k!=d && (i+k)/j!=d && (j+k)/i!=d && //SOMA, DPS 2 
                        (i-j)*k!=d && (i-k)*j!=d && (j-k)*i!=d && (i-j)+k!=d && (i-k)+j!=d && (j-k)+i!=d && (i-j)/k!=d && (i-k)/j!=d && (j-k)/i!=d && //sub1
                        (j-i)*k!=d && (k-i)*j!=d && (k-j)*i!=d && (j-i)+k!=d && (k-i)+j!=d && (k-j)+i!=d && (j-i)/k!=d && (k-i)/j!=d && (k-j)/i!=d && //sub2
                        (i/j)*k!=d && (i/k)*j!=d && (j/k)*i!=d && (i/j)+k!=d && (i/k)+j!=d && (j/k)+i!=d && (i/j)-k!=d && (i/k)-j!=d && (j/k)-i!=d && //div1
                        (j/i)*k!=d && (k/i)*j!=d && (k/j)*i!=d && (j/i)+k!=d && (k/i)+j!=d && (k/j)+i!=d && (j/i)-k!=d && (k/i)-j!=d && (k/j)-i!=d && 
                        i/(k*j)!=d && j/(k*i)!=d && k/(i*j)!=d && k/(i-j)!=d && j/(i-k)/j!=d && i/(j-k)!=d && k/(j-i)!=d && j/(k-i)!=d && i/(k-j)!=d && k/(i+j)!=d && j/(i+k)!=d && i/(j+k)!=d &&
                        k-(i+j)!=d && j-(i+k)!=d && i-(j+k)!=d && k-(i*j)!=d && j-(i*k)!=d && i-(j*k)!=d && k-(i/j)!=d && j-(i/k)/j!=d && i-(j/k)!=d && k-(j/i)!=d && j-(k/i)!=d && i-(k/j)!=d
                    )
                    {
                        flag=1;
                        a=i;
                        b=j;
                        c=k;
                        break;
                    }
                }
            }
            if(flag==1){
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    cout << a <<" " << b << " " << c << "\n";
    return 0;
}