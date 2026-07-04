// https://neps.academy/br/exercise/43

#include <bits/stdc++.h>
using namespace std;

int andares, casos;
vector<int> bit, vt;

int lowbit(int i){
    return i&-i;
}

void update(int i, int x){
    while(i <= andares){
        bit[i]+=x;
        i+=lowbit(i);
    }
}

int query(int i){
    int soma = 0;
    while(i){
        soma+=bit[i];
        i-=lowbit(i);
    }
    return soma;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>andares>>casos;

    bit.resize(andares+1);
    for(int i = 1 ; i <= andares ; i++){
        int n; cin>>n;
        vt.push_back(n);
        update(i, n);
    }

    for(int caso = 0 ; caso < casos ; caso++){
        int op; cin>>op;
        if(op == 0){
            int i, x; cin>>i>>x;
            int dif = x - vt[i-1];
            vt[i-1] = x;
            update(i, dif);
        } else{
            int i; cin>>i;
            cout<<query(i)<<"\n";
        }
    }

    return 0;
}
