#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 100005;

//input
string S, T;

int N;
ll dp[MAX_N][9];

void debug_dp(){
    for (int i=0;i<=N;i++){
        for (int j=0;j<=8;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> S;
    T = "chokudai";

    N = S.size();
    for (int i=0;i<=8;i++){
        dp[0][i] = 0;
    }
    for (int i=0;i<=N;i++){
        dp[i][0] = 1;
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<8;j++){
            if (S[i] != T[j]){
                dp[i + 1][j + 1] = dp[i][j + 1];
            }else{
                dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % 1000000007;
            }

        }
    }

    cout << dp[N][8] << endl;

    return 0;
}
