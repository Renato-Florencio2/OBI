// https://neps.academy/br/exercise/2792

#include <bits/stdc++.h>
using namespace std;

int nAlfa, nMens;
map<char, bool> alfa;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>nAlfa>>nMens;

    string l; cin>>l;
    for(auto c:l) alfa[c] = true;

    string mens; cin>>mens;

    bool resp = true;

    for(auto c:mens){
        if(!alfa.count(c)){
            resp = false;
            break;
        }
    }

    if(resp) cout<<"S\n";
    else cout<<"N\n";
    
    return 0;
}

