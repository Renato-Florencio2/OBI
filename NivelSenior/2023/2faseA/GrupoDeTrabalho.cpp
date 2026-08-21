// https://neps.academy/br/exercise/2436

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int alunos, tamP, tamN; cin>>alunos>>tamP>>tamN;

    vector<pair<int, int>> conjP, conjN;

    for(int i = 0 ; i < tamP ; i++){
        int n1, n2; cin>>n1>>n2;
        conjP.push_back({n1, n2});
    }

    for(int i = 0 ; i < tamN ; i++){
        int n1, n2; cin>>n1>>n2;
        conjN.push_back({n1, n2});
    }

    vector<int> sala(alunos+1);
    for(int i = 0 ; i <= alunos/3 ; i++){
        int a1, a2, a3; cin>>a1>>a2>>a3;

        sala[a1] = i;
        sala[a2] = i;
        sala[a3] = i;
    }

    int quant = 0;
    for(auto [a1, a2] : conjP){
        if(sala[a1] != sala[a2]) quant++;
    }

    for(auto [a1, a2] : conjN){
        if(sala[a1] == sala[a2]) quant++;
    }

    cout<<quant<<endl;

    return 0;
}
