// https://neps.academy/br/exercise/3125

#include <bits/stdc++.h>
using namespace std;

bool possivel(){
    int minLeite, maxLeite, maxTotal, quantExpr; cin>>minLeite>>maxLeite>>maxTotal>>quantExpr;

    while(true){

        maxTotal-=quantExpr;

        if(maxTotal > maxLeite){
            continue;
        } else if(maxTotal < minLeite){
            return false;
        } else{
            return true;
        }
    }

}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    if(possivel()) cout<<"S\n";
    else cout<<"N\n";

    return 0;
}
