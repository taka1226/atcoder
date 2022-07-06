#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
//const
const int MAX_K = 1005;
const int MAX_N = 1005;
//inputs
ll N, K;
ll A[MAX_K];
pair<ll, ll> P[MAX_N];

int main(){
    cin >> N >> K;
    for (int i=0;i<K;i++){
        cin >> A[i];
        A[i]--;
    }

    for (int i=0;i<N;i++){
        cin >> P[i].first >> P[i].second;
    }

    ll max_d = -1;
    for (int i=0;i<N;i++){
        ll min_d = 1e15;
        for (int j=0;j<K;j++){
            ll d = pow(P[i].first - P[A[j]].first, 2) + pow(P[i].second - P[A[j]].second, 2);
            min_d = min(min_d, d);
        }
        max_d = max(max_d, min_d);
    }

    printf("%.12lf\n", sqrt((double)max_d));
    return 0;
}
