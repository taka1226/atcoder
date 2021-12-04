#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const int MAX_N = 3005;

//input
int N;
int A[MAX_N], B[MAX_N];

ll dp[MAX_N][MAX_N];

void debug_R(){
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }
    for (int i=1;i<=N;i++){
        cin >> B[i];
    }

    for (int i=1;i<=N;i++){
        for (int j=1;j<=MAX_N-1;j++){
            if (i == 1){
                if (A[i] <= j && j <= B[i]){
                    dp[i][j] = 1;
                }
                continue;
            }
            if (A[i] <= j && j <= B[i]){
                dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 998244353;
            }else{
                dp[i][j] = 0;
            }
        }
    }
    debug_R();
    ll res = 0;
    for (int i=A[N];i<=B[N];i++){
        res += dp[N][i];
    }

    cout << res << endl;
    return 0;
}
