// https://neps.academy/br/exercise/575

#include <bits/stdc++.h>
using namespace std;

int pecasE = 1;
int possi = 0, dimensao;

void rec(int pecasRes, int pos){
    if(pos == dimensao){
        possi++;
        return;    
    }
    if(pecasRes == dimensao-pos) rec(pecasRes-1, pos+1);
    else{
        if(pecasRes != 0){
            rec(pecasRes-1, pos+1);
            rec(pecasRes, pos+1);
        } else{
            possi++;
            return;
        }
    }
}

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(0);

    int torres; cin>>dimensao>>torres;
    pecasE+=torres;

    rec(pecasE, 0);

    if(torres==1) cout<<possi*2<<"\n";
    else cout<<possi<<"\n";

    return 0;
}
