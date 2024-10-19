#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
#define vetor vector<ll>
#define pb push_back
#define bc back
 
#define all(x) x.begin(),x.end()
 
#define NO {cout << "NO" << "\n";}
#define YES {cout << "YES" << "\n";}
 
ll Dfs(ll indice, vetor &vis, vector<vetor> &vet, vector<ll> &folhas){
    int flag=0;
    for(ll i=0; i<vet[indice].size(); i++){
        if(vis[vet[indice][i]]==-1){
            vis[vet[indice][i]]=0;
            folhas[indice]+=Dfs(vet[indice][i], vis, vet, folhas);
            flag=1;
        }
    }
    if(flag==0){
        folhas[indice]=1;
        return 1;
    }
    else{
        return folhas[indice];
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t, n;
    ll u, v;
    ll q, xi, yi;
    cin >> t;
 
    while(t>0){
        cin >> n;
 
        vetor vis(n+1, -1);
        vector<vetor> vet(n+1);
        vector<ll> folhas(n+1, 0);
 
        for(ll i=0; i<n-1; i++){
            cin >> u >> v;
            vet[u].pb(v);
            vet[v].pb(u);
        }
 
        vis[1]=0;
        (void)Dfs(1, vis, vet, folhas);
 
 
        cin >> q;
 
        for(ll i=0; i<q; i++){
            cin >> xi >> yi;
            
            cout << folhas[xi]*folhas[yi] << "\n";
        }
 
        t--;
    }
 
    return 0;
}