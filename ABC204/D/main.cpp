#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 105;
const int MAX_T = 1e5 + 5;
//input
int N;
int T[MAX_N];

bool dp[MAX_N][MAX_T];
int main(){
    cin >> N;
    int sum_all = 0;
    for (int i=1;i<=N;i++){
        cin >> T[i];
        sum_all += T[i];
    }

    dp[0][0] = true;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=sum_all;j++){
            if (j < T[i]){
                dp[i][j] = dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j] | dp[i-1][j-T[i]];
            }
        }
    }

    int half_all = (sum_all + 1) / 2;
    for (int i=half_all;i<=sum_all;i++){
        if (dp[N][i]){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
