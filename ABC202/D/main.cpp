#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const int MAX_N = 62;
//input
int A, B;
ll K;

//パスカルの三角形 dp
ll dp[MAX_N][MAX_N];

void debug_dp(){
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> A >> B >> K;

    //dp 初期化
    for (int i=0;i<MAX_N;i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
    }
    for (int i=1;i<MAX_N;i++){
        for (int j=1;j<MAX_N;j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    int N = A + B;
    int tmp_A = A;
    int tmp_B = B;
    string S;
    for (int i=0;i<N;i++){
        tmp_A--;
        if (dp[tmp_A + tmp_B][tmp_A] < K){
            S += "b";
            K -= dp[tmp_A + tmp_B][tmp_A];
            tmp_A++;
            tmp_B--;
        }else{
            S += "a";
        }
    }

    cout << S << endl;

    return 0;
}
