// https://olimpiada.ic.unicamp.br/pratique/p2/2011/f2/magico/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int larg; cin>>larg;
    bool cond = true;

    vector<bool> rep(larg*larg+1, 0);

    ll dig1 = 0, dig2 = 0;
    vector<ll> linhas(larg, 0), colunas(larg, 0);
    for(int l = 0 ; l < larg ; l++){
        int pos2 = larg-1 - l;
        for(int c = 0 ; c < larg ; c++){
            ll x; cin>>x;

            if(c == l) dig1 += x;
            if(c == pos2) dig2 += x;

            if(!rep[x]) rep[x] = true;
            else cond = false;

            linhas[l] += x;
            colunas[c] += x;

            if(c == larg-1 && l != 0) if(linhas[l] != linhas[l-1]) cond = false;
            if(l == larg-1 && c != 0) if(colunas[c] != colunas[c-1]) cond = false;
        }
    }

    if(dig1 != dig2) cond = false;
    else if(dig1 != linhas[0]) cond = false;
    else if(dig1 != colunas[0]) cond = false;

    if(!cond) cout<<"0"<<endl;
    else cout<<dig1<<endl;

    return 0;
}
