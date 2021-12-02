#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 105;
const int MAX_W = 100005;

//input
int N, W;
int w[MAX_N];
ll v[MAX_N];

ll dp[MAX_N][MAX_W];

int main(){
    cin >> N >> W;
    for (int i=1;i<=N;i++){
        cin >> w[i] >> v[i];
    }

    for (int i=1;i<=N;i++){
        for (int j=1;j<=W;j++){
            if (j - w[i] >= 0){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}
