#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 305;
const int INF = 1e6;

//input
int N, X, Y;
int A[MAX_N], B[MAX_N];
int dp[MAX_N][MAX_N][MAX_N];

int main(){
    cin >> N;
    cin >> X >> Y;
    for (int i=1;i<=N;i++){
        cin >> A[i] >> B[i];
    }

    //dp の初期化
    for (int i=0;i<=N;i++){
        for (int j=0;j<=X;j++){
            for (int k=0;k<=Y;k++){
                dp[i][j][k] = INF;
            }
        }
    }
    dp[0][0][0] = 0;
    int a, b;
    for (int i=1;i<=N;i++){
        for (int j=0;j<=X;j++){
            for (int k=0;k<=Y;k++){
                a = min(j+A[i], X);
                b = min(k+B[i], Y);
                dp[i][a][b] = min(dp[i][a][b], dp[i-1][j][k] + 1);

                dp[i][j][k] = min(dp[i][j][k], dp[i-1][j][k]);
            }
        }
    }

    if (dp[N][X][Y] >= INF){
        cout << -1 << endl;
        return 0;
    }else{
        cout << dp[N][X][Y] << endl;

    }

    return 0;
}
