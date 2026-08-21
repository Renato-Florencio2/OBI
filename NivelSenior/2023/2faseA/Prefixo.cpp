// https://neps.academy/br/exercise/2437

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

__int32_t main(){

    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    int tam1, tam2;
    string s1, s2; cin>>tam1>>s1>>tam2>>s2;

    int resp = 0;
    for(int i = 0 ; i < min(tam1, tam2) ; i++){
        if(s1[i] == s2[i]) resp++;
        else break;
    }

    cout<<resp<<endl;

    return 0;
}
