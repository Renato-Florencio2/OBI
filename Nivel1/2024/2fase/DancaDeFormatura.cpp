// https://neps.academy/br/exercise/2794

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m, casos;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    cin>>n>>m>>casos;
    
    vector<int> linha(n+1), coluna(m+1);
    for(int i = 0 ; i <= n ; i++) linha[i] = i;
    for(int i = 0 ; i <= m ; i++) coluna[i] = i;

    for(int i = 0 ; i < casos ; i++){
        char esc; cin>>esc;
        int n1, n2; cin>>n1>>n2;
        if(esc == 'C') swap(coluna[n1], coluna[n2]);
        else swap(linha[n1], linha[n2]);
    }

    for(int l = 1 ; l <= n ; l++){
        for(int c = 1 ; c <= m ; c++){
            cout<<((linha[l]-1)*m) + coluna[c]<<" ";
        } cout<<endl;
    }

    return 0;
}
