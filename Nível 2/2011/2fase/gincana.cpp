#include <bits/stdc++.h>
using namespace std;

int times;

vector<int> uf;
int finduf(int n1){
    return (uf[n1] == n1) ? n1 : (uf[n1] = finduf(uf[n1]));
}
void unionuf(int x, int y){
    int n1 = finduf(x), n2 = finduf(y);

    if(n1 == n2) return;
    times--;
    uf[n1] = uf[n2];
}

int main() {
	
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int pares;
    cin>>times>>pares;
    for(int i = 0 ; i <= times ; i++) uf.push_back(i);
    for(int i = 0 ; i < pares ; i++){
        int p1, p2;
        cin>>p1>>p2;
        unionuf(p1, p2);
    }

    cout<<times;

    return 0;
}
