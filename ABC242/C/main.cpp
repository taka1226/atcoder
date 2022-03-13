#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 1000005;
const ll mod = 998244353;

//input
int N;
ll dp[MAX_N][10];

void debug(){
    for (int i=0;i<=N;i++){
        for (int j=0;j<=9;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> N;

    //初期化
    for (int i=0;i<=N;i++){
        for (int j=0;j<=9;j++){
            dp[i][j] = 0;
        }
    }
    for (int i=1;i<=9;i++){
        dp[1][i] = 1;
    }

    for (int i=2;i<=N;i++){
        for (int j=1;j<=9;j++){
            if (j == 1){
                dp[i][j] = (dp[i-1][j] + dp[i-1][j+1]) % mod;
            }else if (j == 9){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % mod;
            }else{
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) % mod;
            }
        }
    }

    //debug();
    ll sum = 0;
    for (int i=1;i<=9;i++){
        sum += dp[N][i];
        sum = sum % mod;
    }
    cout << sum << endl;
    return 0;
}
