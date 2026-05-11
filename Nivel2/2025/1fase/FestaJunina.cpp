// https://neps.academy/br/exercise/3124

#include <bits/stdc++.h>
using namespace std;
int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int esc, sup, loj; cin>>esc>>sup>>loj;

    int distPercorrida=0;
    if(min(min(esc, loj), sup) == esc){
        distPercorrida+=(max(loj, sup)-esc)*2;
    } else if(max(max(esc, loj), sup) == esc){
        distPercorrida+=(esc-min(loj, sup))*2;
    } else{
        distPercorrida+=(esc-min(loj, sup))*2+(max(loj, sup)-esc)*2;
    }

    cout<<distPercorrida<<"\n";

    return 0;
}
