#include <bits/stdc++.h>
using namespace std;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int pos, avi, dis, total;
    cin>>pos>>dis>>avi;

    if(avi > dis) total += (pos-avi) + dis;
    else total += dis-avi;
    

    cout<<total<<"\n";

    return 0;
}
