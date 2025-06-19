#include <bits/stdc++.h>
using namespace std;
int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(0);

    int linhas, colunas;
    cin>>linhas>>colunas;

    pair<int, int> seguir;
    pair<char, bool> matriz[linhas][colunas];
    for(int l = 0 ; l < linhas ; l++){
        string linha;
        cin>>linha;
        for(int c = 0 ; c < colunas ; c++){
            matriz[l][c] = {linha[c], 0};
            if(linha[c] == 'o') seguir = {l, c};
        }
    }

    while(true){
        bool quebra = 0;

        if((matriz[seguir.first][seguir.second+1].first == 'H' &&  seguir.second+1 < colunas) && !matriz[seguir.first][seguir.second+1].second){
            seguir.second++;
            matriz[seguir.first][seguir.second].second = 1;
        }else if((matriz[seguir.first][seguir.second-1].first == 'H'  && seguir.second-1 >= 0) && !matriz[seguir.first][seguir.second-1].second){
            seguir.second--;
            matriz[seguir.first][seguir.second].second = 1;
        }else if((matriz[seguir.first+1][seguir.second].first == 'H' && seguir.first+1 < linhas) && !matriz[seguir.first+1][seguir.second].second){
            seguir.first++;
            matriz[seguir.first][seguir.second].second = 1;
        }else if((matriz[seguir.first-1][seguir.second].first == 'H' && seguir.first-1 >= 0) && !matriz[seguir.first-1][seguir.second].second){
            seguir.first--;
            matriz[seguir.first][seguir.second].second = 1;
        }else quebra = 1;

        if(quebra) break;
    }

    cout<<seguir.first+1<<" "<<seguir.second+1<<"\n";

    return 0;
}
