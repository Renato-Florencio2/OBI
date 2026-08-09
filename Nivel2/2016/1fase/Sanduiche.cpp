// https://neps.academy/br/exercise/60

#include <bits/stdc++.h>
using namespace std;
#define int long long

int pedacosSeparados, tamanhoDesejado, totalConjunto = 0;
vector<int> conjunto;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>pedacosSeparados>>tamanhoDesejado;

    conjunto.resize(pedacosSeparados+1);
    for(int i = 1 ; i <= pedacosSeparados ; i++){
        cin>>conjunto[i]; totalConjunto += conjunto[i];
    }
    
    int vezes = 0;

    int l = 1, soma = 0;
    for(int r = 1 ; r <= pedacosSeparados ; r++){
        soma += conjunto[r];

        while(soma > tamanhoDesejado && l < r){
            soma -= conjunto[l];
            l++;
        }

        if(soma == tamanhoDesejado) vezes++;
    }

    l = 2, soma = totalConjunto;
    for(int r = 2 ; r < pedacosSeparados ; r++){
        soma -= conjunto[r];

        while(soma < tamanhoDesejado && l <= r){
            soma += conjunto[l];
            l++;
        }

        if(soma == tamanhoDesejado) vezes++;
    }

    if(tamanhoDesejado == totalConjunto) vezes++;

    cout<<vezes<<'\n';

    return 0;
}

