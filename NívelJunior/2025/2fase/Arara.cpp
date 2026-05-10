// https://neps.academy/br/exercise/3262

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int araras, gaiolas; cin>>araras>>gaiolas;
    if(araras+araras*4-4 > gaiolas) cout<<"N\n";
    else cout<<"S\n";

    return 0;
}