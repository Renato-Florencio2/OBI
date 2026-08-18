// https://neps.academy/br/exercise/3127

#include <bits/stdc++.h>
using namespace std;


__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int lixo; string comando; cin>>lixo>>comando;

    int resp = 1;
    for(auto c:comando){
        if(c == 'E') resp *= 2;
        else resp = resp*2+1;
    }

    cout<<resp<<endl;

    return 0;
}
