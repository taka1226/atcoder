#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 200005;

//inputs
int N;
int A[MAX_N];
ll cnt[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
        cnt[A[i]]++;
    }

    for (int i=0;i<MAX_N;i++){
        cnt[i+1] += cnt[i];
    }

    ll ans = 0;
    for (int i=0;i<N;i++){
        ans += cnt[A[i] - 1] * (ll)(N - cnt[A[i]]);
    }

    cout << ans << endl;
    return 0;
}
