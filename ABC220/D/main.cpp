#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 1e5 + 5;
//input
int N;
int A[MAX_N];

ll dp[MAX_N][10];

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }

    //dp の初期化
    for (int i=0;i<MAX_N;i++){
        for (int j=0;j<=9;j++){
            dp[i][j] = 0;
        }
    }
    int a, b;
    for (int i=1;i<=N;i++){
        for (int j=0;j<=9;j++){
            if (i == 1){
                if (j == A[1]){
                    dp[i][j] = 1;
                    continue;
                }
            }
            a = (j - A[i]) % 10;
            if (a < 0) a += 10;
            dp[i][j] = dp[i-1][a];

            for (int k=0;k<=9;k++){
                if ((k * A[i]) % 10 == j){
                    dp[i][j] = (dp[i][j] + dp[i-1][k]) % 998244353;
                }
            }
        }
    }

    //デバッグ
    // for (int i=0;i<=N;i++){
    //     for (int j=0;j<=9;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i=0;i<=9;i++){
        cout << dp[N][i] << endl;
    }
    return 0;
}
