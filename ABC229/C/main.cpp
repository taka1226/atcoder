#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const ll MAX_N = 300005;
const ll MAX_W = 300000005;

//input
ll N, W;
typedef pair<ll, int> Cheese;
Cheese C[MAX_N];

int main(){
    cin >> N >> W;
    for (int i=0;i<N;i++){
        cin >> C[i].first >> C[i].second;
    }

    sort(C, C+N, greater<Cheese>());

    ll ans = 0;
    for (int i=0;i<N;i++){
        ll d = min((ll)C[i].second, W);
        ans += C[i].first * d;
        W -= d;
        if (W == 0) break;
    }

    cout << ans << endl;


    return 0;
}
