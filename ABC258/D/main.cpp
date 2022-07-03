#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
//const
const int MAX_N = 200005;

//inputs
int N;
ll X;
ll A[MAX_N], B[MAX_N];


int main(){
    cin >> N >> X;
    for (int i=0;i<N;i++){
        cin >> A[i] >> B[i];
    }

    ll base = 0;
    ll min_b = LLONG_MAX;

    ll ans = LLONG_MAX;
    for (ll i=0;i<N;i++){
        base += (A[i] + B[i]);
        min_b = min(min_b, B[i]);
        ll res = base + min_b * (X - (i+1));

        ans = min(ans, res);
    }

    cout << ans << endl;
    return 0;
}
