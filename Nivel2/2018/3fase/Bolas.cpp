// https://neps.academy/br/exercise/373

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<int> bolas(10, 0);
    for(int i = 0 ; i < 8 ; i++){
        int bola; cin>>bola;
        bolas[bola]++;
    }

    for(auto i:bolas) if(i > 4){
        cout<<"N\n";
        return 0;
    } cout<<"S\n";

    return 0;
}
