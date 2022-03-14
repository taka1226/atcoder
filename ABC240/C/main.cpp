#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 105;
const int MAX_X = 100005;

int N, X;
int A[MAX_N];
int B[MAX_N];
bool dp[MAX_N][MAX_X]; //dp[i] は iまでとんでX が作れるか

void debug(){
    for (int i=0;i<=N;i++){
        for (int j=0;j<=X;j++){
            cout << dp[i][j] << " ";

        }
        cout << endl;
    }
}
int main(){
    cin >> N >> X;
    for (int i=1;i<=N;i++){
        cin >> A[i] >> B[i];
    }

    //dp 初期化
    for (int i=0;i<=N;i++){
        for (int j=0;j<=X;j++){
            dp[i][j] = false;

        }
    }
    dp[1][A[1]] = true;
    dp[1][B[1]] = true;

    for (int i=1;i<N;i++){
        for (int j=0;j<=X;j++){
            if (j >= A[i+1] && j >= B[i+1]){
                dp[i+1][j] = dp[i][j - A[i+1]] || dp[i][j - B[i+1]];
            }else if (j >= A[i+1]){
                dp[i+1][j] = dp[i][j - A[i+1]];
            }else if (j >= B[i+1]){
                dp[i+1][j] = dp[i][j - B[i+1]];
            }
        }
    }

    //debug();
    if (dp[N][X]){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
