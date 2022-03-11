#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll N;

int main(){
    cin >> N;

    ll k0 = 0;
    for (ll i = 1; i * i <= N; i++){
        k0 = i;
    }

    ll sum = 0;
    for (ll i = 1; i <= k0; i++){
        sum += i * (N / i - N / (i + 1));
    }

    for (ll i = 1; i <= (N / (k0 + 1)); i++){
        sum += (N / i);
    }

    cout << sum << endl;
    return 0;
}
