#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 300005;

//input
int N;
ll A[MAX_N];

ll dp[MAX_N][2]; //dp[i][j] は i まで分かっていて iはj回行う

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }

    //行動１を行わない
    //初期化
    for (int i=1;i<=N;i++){
        dp[i][0] = 0LL;
        dp[i][1] = 0LL;
    }
    dp[1][0] = 0LL;
    dp[1][1] = LLONG_MAX;
    for (int i=2;i<=N;i++){
        dp[i][0] = dp[i-1][1];
        dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + A[i];
    }
    ll ans1 = dp[N][1];

    //行動１を行う
    //初期化
    for (int i=1;i<=N;i++){
        dp[i][0] = 0LL;
        dp[i][1] = 0LL;
    }
    dp[1][1] = A[1];
    dp[1][0] = LLONG_MAX;
    for (int i=2;i<=N;i++){
        dp[i][0] = dp[i-1][1];
        dp[i][1] = min(dp[i-1][0], dp[i-1][1]) + A[i];
    }
    ll ans2 = min(dp[N][0], dp[N][1]);

    cout << min(ans1, ans2) << endl;

    return 0;
}
