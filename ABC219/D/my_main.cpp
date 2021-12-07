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
    for (int i=0;i<MAX_N;i++){
        for (int j=0;j<MAX_N;j++){
            for (int k=0;k<MAX_N;k++){
                dp[i][j][k] = INF;
            }
        }
    }

    for (int i=1;i<=N;i++){
        for (int j=0;j<=X;j++){
            for (int k=0;k<=Y;k++){
                if (j+A[i] >= X && k+B[i] >= Y){
                    dp[i][j][k] = 1;
                    continue;
                }
                dp[i][j][k] = min(dp[i-1][j][k], dp[i-1][j+A[i]][k+B[i]] + 1);
            }
        }
    }

    if (dp[N][0][0] >= INF){
        cout << -1 << endl;
        return 0;
    }else{
        cout << dp[N][0][0] << endl;
        return 0;
    }

    return 0;
}
