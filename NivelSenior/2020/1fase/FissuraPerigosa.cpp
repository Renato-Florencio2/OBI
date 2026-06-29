// https://neps.academy/br/exercise/825

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> matriz;

void BFS(int forca, int tam){
    queue<pair<int, int>> fila;
    if(forca >= matriz[0][0]-'0'){
        fila.push({0, 0});
        matriz[0][0] = '*';
    }

    while(!fila.empty()){
        auto at = fila.front(); fila.pop();

        int veriLinha[] = {-1, 0, 1, 0}, veriColuna[] = {0, 1, 0, -1};
        for(int i = 0 ; i < 4 ; i++){
            int colAt = at.second + veriColuna[i], linAt = at.first + veriLinha[i];
            
            if(linAt >= tam || linAt < 0) continue;
            if(colAt >= tam || colAt < 0) continue;
            if(matriz[linAt][colAt] == '*') continue;
            if(matriz[linAt][colAt]-'0' > forca) continue;

            fila.push({linAt, colAt});
            matriz[linAt][colAt] = '*';
        }
    }
}

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int tam, forca; cin>>tam>>forca;
    matriz.assign(tam, vector<char>(tam));

    for(int i = 0 ; i < tam ; i++){
        string st; cin>>st;
        for(int in = 0 ; in < tam ; in++) matriz[i][in] = st[in]; 
    }

    BFS(forca, tam);

    for(int i = 0 ; i < tam ; i++){
        for(int in = 0 ; in < tam ; in++) cout<<matriz[i][in];
        cout<<"\n";
    }

    return 0;
}
