#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
const ll MAX_N = 105;

//inputs
ll N;
ll S_index[MAX_N][10];

int main(){
    cin >> N;
    vector<string> S(N);

    for (ll i=0;i<N;i++){
        cin >> S[i];
    }

    for (ll i=0;i<N;i++){
        for (ll j=0;j<10;j++){
            ll d = S[i][j] - '0';
            S_index[i][d] = j;
        }
    }

    vector<ll> res[MAX_N];
    for (ll i=0;i<N;i++){
        for (ll j=0;j<10;j++){
            res[j].push_back(S_index[i][j]);
        }
    }

    for (ll i=0;i<10;i++){
        sort(res[i].begin(), res[i].end());
    }

    ll min_t = LLONG_MAX;
    for (ll i=0;i<10;i++){
        ll max_tt = 0;
        ll max_t = -1;
        ll ans = -1;
        for (auto u : res[i]){
            if (max_t < u){
                max_t = u;
                max_tt = u;
            }else if (max_t == u){
                max_tt += 10;
            }
            ans = max(ans, max_tt);
        }

        min_t = min(min_t, ans);
    }

    cout << min_t << endl;
    return 0;
}
