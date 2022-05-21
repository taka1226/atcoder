#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
//const
const ll MAX_N = 200005;

//input
ll N;
ll A[MAX_N];
map<ll, ll> cnt;
map<ll, ll> cnt_cnt;

int main(){
    cin >> N;
    for (ll i=0;i<N;i++){
        cin >> A[i];
        cnt[A[i]]++;
    }

    for (auto [x, y] : cnt){
        cnt_cnt[y]++;
    }

    ll tmp_n = N;
    ll ans = 0;
    int i=0;
    for (auto [s, t] : cnt){
        if (i == N - 2) break;
        for (auto [x, y] : cnt_cnt){
            ans += (ll)t * (ll)x * (tmp_n - t - x) * (y - 1);
        }
        tmp_n -= t;
        i++;
    }

    cout << ans << endl;


    return 0;
}
