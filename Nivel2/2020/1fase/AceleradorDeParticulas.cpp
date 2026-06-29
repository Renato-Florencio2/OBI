// https://neps.academy/br/exercise/822

#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    int total; cin>>total;
    total -= 5;
    total = total % 8;

    cout<<total<<"\n";

    return 0;
}
