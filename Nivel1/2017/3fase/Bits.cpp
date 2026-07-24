// https://neps.academy/br/exercise/39

#include <bits/stdc++.h>
using namespace std;
#define int long long
const long long mod = 1e9+7;

int tam, k;

vector<vector<int>> dp;

int solv(int pos, int bits){
    if(dp[pos][bits] != -1) return dp[pos][bits];
    if(pos == tam) return 1;
    
    int vai = 0, nvai = 0;
    if(bits+1 < k) vai = solv(pos+1, bits+1);
    nvai = solv(pos+1, 0);

    int total = (vai + nvai) % mod;

    return dp[pos][bits] = total;
}

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    cin>>tam>>k; dp.assign(tam + 1, vector<int>(k, -1));

    cout<<solv(0, 0)<<"\n";

    return 0;
}

/*
0 0 0 0 - 1
1 0 0 0 - 2
1 0 1 0 - 3
0 1 0 0 - 4
0 1 0 1 - 5
0 0 1 0 - 6
0 0 0 1 - 7
1 0 0 1 - 8
*/