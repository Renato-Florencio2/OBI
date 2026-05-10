#include <bits/stdc++.h>
using namespace std;
//#define int long long

vector<int> posicoes;
unordered_map<int, int> premios;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string resp ="";

    int premio, macacos;
    cin>>premio>>macacos;

    int premio2 = premio-1;
    while(premio2--){
        int n;
        cin>>n;
        posicoes.push_back(n);
    }
    posicoes.push_back(1000000000);

    for(int i = 0 ; i < int(posicoes.size()) ; i++){
        int n;
        cin>>n;
        premios.insert({posicoes[i], n});
    }

    while(macacos--){
        int mac;
        cin>>mac;
        int pos = *upper_bound(posicoes.begin(), posicoes.end(), mac);
        resp+=to_string(premios[pos])+" ";
    }

    cout<<resp;

    return 0;
}
