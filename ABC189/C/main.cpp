#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 10005;
//input
int N;
int A[MAX_N];

int dp[MAX_N][MAX_N];
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }

    for (int i=1;i<=N;i++){
        for (int j=i;j<=N;j++){
            if (i == j){
                dp[i][j] = A[i];
            }else{
                dp[i][j] = min(dp[i][j-1], A[j]);
            }
        }
    }

    int ans = -100;
    for (int i=1;i<=N;i++){
        for (int j=i;j<=N;j++){
            ans = max(ans, dp[i][j] * (j - i + 1));
        }
    }

    cout << ans << endl;


    return 0;
}
