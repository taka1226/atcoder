#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;
int N;
ll C;
vector<pair<ll, ll>> V;

int main(){
    cin >> N >> C;
    for (int i=0;i<N;i++){
        ll a, b, c;
        cin >> a >> b >> c;
        V.emplace_back(a, c);
        V.emplace_back(b+1, -c);
    }

    sort(V.begin(), V.end());
    ll ans = 0;
    ll fee = 0;
    ll t = 1;
    for (auto [x, y] : V){
        ans += min(fee, C) * (x - t);
        fee += y;
        t = x;
    }

    cout << ans << endl;
}
