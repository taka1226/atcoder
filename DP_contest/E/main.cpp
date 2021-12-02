#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 105;
const int MAX_V = 100005;
const ll INF = 1e16;

//input
int N;
ll W;
ll w[MAX_N];
int v[MAX_N];

ll dp[MAX_N][MAX_V];

void debug_dp(){
    for (int i=0;i<=20;i++){
        for (int j=0;j<=20;j++){
            if (dp[i][j] == INF)cout << "INF" << " ";
            else cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> N >> W;
    for (int i=1;i<=N;i++){
        cin >> w[i] >> v[i];
    }

    //初期化
    for (int i=0;i<=N;i++){
        for (int j=0;j<=1e5;j++){
            dp[i][j] = INF;
        }
    }
    for (int i=0;i<=N;i++){
        dp[i][0] = 0;
    }


    for (int i=1;i<=N;i++){
        for (int j=1;j<=1e5;j++){
            if (j - v[i] < 0){
                dp[i][j] = dp[i - 1][j];
                continue;
            }
            dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
        }
    }
    ll ans = -1;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=1e5;j++){
            if (dp[i][j] <= W){
                ans = max(ans, (ll)j);
            }
        }
    }

    //debug_dp();
    cout << ans << endl;

    return 0;
}
