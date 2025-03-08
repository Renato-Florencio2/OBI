#include <bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int, int> tempo;
    unordered_map<int, bool> verificar;
    set<int> contatos;

    int casos, num;
    bool t = false;
    char letra;
    cin>>casos;

    for(int caso = 0 ; caso < casos ; caso++){
        cin>>letra>>num;

        if(letra == 'T'){
            for(int i:contatos) if(verificar[i]) tempo[i]+=num;
            t = true;
        }
        else{
            if(t == false) for(int i:contatos) if(verificar[i]) tempo[i]++;
            else t=false;
        }

        if(letra == 'R'){
            contatos.insert(num);
            verificar[num]=1;
        } else if(letra == 'E') verificar[num]=0;
    }

    for(int i:contatos){
        if(!verificar[i]) cout<<i<<" "<<tempo[i]<<endl;
        else cout<<i<<" -1"<<endl;
    }

    return 0;
}