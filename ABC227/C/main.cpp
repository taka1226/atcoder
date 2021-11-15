#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll N;

int main(){
    cin >> N;

    ll ans = 0;
    for (ll i=1;i*i*i<=N;i++){
        for (ll j=i;i*j*j<=N;j++){
            ll t =  N / (i * j) - j;
            if (t >= 0){
                ans += t + 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
