// https://neps.academy/br/exercise/27

#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> vt;
vector<pair<int, int>> sweep;

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n; cin>>n; vt.push_back(0);
    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;
        if(x != vt.back()) vt.push_back(x);
    } vt.push_back(0);

    for(int i = 1 ; i < long(vt.size()-1) ; i++){
        if(vt[i-1] > vt[i] && vt[i+1] > vt[i]) sweep.push_back({vt[i], 1});
        else if(vt[i-1] < vt[i] && vt[i+1] < vt[i]) sweep.push_back({vt[i], 2});
    }

    sweep.push_back({0, 1});
    sort(sweep.begin(), sweep.end());
    
    int resp = 0, at = 0;
    for(auto i:sweep){
        if(i.second == 1) at++;
        else at--;
        resp = max(resp, at);
    }
    
    cout<<resp+1<<"\n";

    return 0;
}
