// https://neps.academy/br/exercise/3121

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int ref, maxCalorias; cin>>ref>>maxCalorias;

    int caloriasAt=0;
    for(int i = 0 ; i < ref ; i++){
        int pro, gor, car; cin>>pro>>gor>>car;
        caloriasAt+=pro*4+gor*9+car*4;
    }

    if(caloriasAt >= maxCalorias) cout<<"0\n";
    else cout<<maxCalorias-caloriasAt<<"\n";

    return 0;
}
