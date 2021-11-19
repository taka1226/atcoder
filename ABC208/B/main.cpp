#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll P;

ll coin[11];
ll coins(int n){
    if (n == 1){
        coin[n] = 1;
        return coin[n];
    }
    if (coin[n] > 0) return coin[n];
    else{
        coin[n] = n * coins(n - 1);
        return coin[n];
    }
}

int main(){
    cin >> P;
    coins(10);
    ll ans = 0;
    for (int i=10;i>=1;i--){
        ll count = P / coin[i];
        ans += count;
        P -= coin[i] * count;
    }

    cout << ans << endl;
    return 0;
}
