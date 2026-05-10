// https://neps.academy/br/exercise/3268

#include <bits/stdc++.h>
using namespace std;

long long resposta_binaria(long long maxi, long long l, long long r){
    long long ans = 0, lo = l; r--;

    while(l <= r){
        long long mid = (l+r)/2, at = (mid+lo)*((mid-lo)+1)/2;
        if(maxi > at){
            ans = mid-(lo-1);
            l = mid+1;
        } else r = mid-1;
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false); cin.tie(0);

    long long casos; cin>>casos;

    for(long long caso = 0 ; caso < casos ; caso++){
        long long maxi, l, r; cin>>maxi>>l>>r;
        cout<<resposta_binaria(maxi, l, r)+1<<"\n";
    }

    return 0;
}
