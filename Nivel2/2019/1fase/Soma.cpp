// https://neps.academy/br/exercise/468

#include <bits/stdc++.h>
using namespace std;
#define int long long

int tam, somaIdeal;
map<int, int> mapa;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>tam>>somaIdeal;

    int ultimo = 0, quant = 0; mapa[0] = 1;
    for(int i = 0 ; i < tam ; i++){
        int n; cin>>n;
        int prefixo = n + ultimo;

        quant += mapa[prefixo - somaIdeal];

        mapa[prefixo]++;
        ultimo = prefixo;
    }

    cout<<quant<<"\n";

    return 0;
}
