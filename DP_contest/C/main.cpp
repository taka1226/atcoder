#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 100005;

//input
int N;
ll a[MAX_N];
ll b[MAX_N];
ll c[MAX_N];

ll dp[MAX_N][4];

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for (int i=1;i<=N;i++){
        for (int j=1;j<3;j++){
            dp[i][j] = -1;
        }
    }

    for (int i=1;i<=N;i++){
        if (i == 1){
            dp[i][1] = a[1];
            dp[i][2] = b[1];
            dp[i][3] = c[1];
            continue;
        }
        //最後がa
        dp[i][1] = max(dp[i-1][2] + a[i], dp[i-1][3] + a[i]);

        //b
        dp[i][2] = max(dp[i-1][1] + b[i], dp[i-1][3] + b[i]);

        //c
        dp[i][3] = max(dp[i-1][1] + c[i], dp[i-1][2] + c[i]);
    }

    ll ans = 0;
    for (int i=1;i<=3;i++){
        ans = max(ans, dp[N][i]);
    }

    cout << ans << endl;

    return 0;
}
