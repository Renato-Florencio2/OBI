// https://neps.academy/br/exercise/2797

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>n;

    int valores[] = {0, 0, 0, 0}, total  = pow(n, 3);

    total-=8; valores[3] = 8;

    if(total){
        int v2 = (n-2) * 12;
        valores[2]=v2;
        total -= v2;
    }
    if(total){
        int v1 = 6 * (n*n - (2*n + 2*(n-2)));
        valores[1] = v1;
        total -= v1;
    }
    if(total){
        valores[0] = total;
    }

    for(auto i:valores){
        cout<<i<<endl;
    }

    return 0;
}
