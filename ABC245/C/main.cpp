#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 200005;

//input
int N, K;
int A[MAX_N], B[MAX_N];
bool dp[MAX_N][2];

int main(){
    cin >> N >> K;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }
    for (int i=1;i<=N;i++){
        cin >> B[i];
    }

    for (int i=1;i<=N;i++){
        dp[i][0] = false;
        dp[i][1] = false;
    }
    dp[1][0] = true;
    dp[1][1] = true;
    for (int i=2;i<=N;i++){
        dp[i][0] = ((abs(A[i] - A[i-1]) <= K) && dp[i-1][0]) || ((abs(A[i] - B[i-1]) <= K) && dp[i-1][1]);

        dp[i][1] = ((abs(B[i] - A[i-1]) <= K) && dp[i-1][0]) || ((abs(B[i] - B[i-1]) <= K) && dp[i-1][1]);
    }

    if (dp[N][0] || dp[N][1]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
