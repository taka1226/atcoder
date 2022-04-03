#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
//const
const int MAX_N = 3005;
const ll mod = 998244353;

//inputs
int N;
int A[MAX_N];
int B[MAX_N];

ll dp[MAX_N][MAX_N];

void debug_dp(){
    for (int i=1;i<=N;i++){
        for (int j=1;j<=10;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }
    for (int i=0;i<N;i++){
        cin >> B[i];
    }

    //dp の初期化
    for (int i=0;i<MAX_N;i++){
        for (int j=0;j<MAX_N;j++){
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 1;
    for (int i=0;i<=N;i++){
        for (int j=0;j<MAX_N-1;j++){
            dp[i][j+1] += dp[i][j];
            dp[i][j+1] = dp[i][j+1] % mod;
        }
        if (i != N){
            for (int j=A[i];j<=B[i];j++){
                dp[i+1][j] += dp[i][j];
                dp[i+1][j] = dp[i+1][j] % mod;
            }
        }
    }

    cout << dp[N][3000] << endl;
    //cout << ans << endl;
    return 0;
}
