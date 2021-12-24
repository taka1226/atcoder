#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 65;
//input
int N;
bool query[MAX_N];
ll dp[MAX_N][2];
int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        string s;cin >> s;
        if (s == "AND"){
            query[i] = true;
        }else if (s == "OR"){
            query[i] = false;
        }
    }

    dp[0][0] = 1;
    dp[0][1] = 1;
    for (int i=1;i<=N;i++){
        //AND
        if (query[i]){
            dp[i][0] = 2 * dp[i-1][0] + dp[i-1][1];
            dp[i][1] = dp[i-1][1];
        }else if (!query[i]){ //or
            dp[i][0] = dp[i-1][0];
            dp[i][1] = 2 * dp[i-1][1] + dp[i-1][0];
        }
    }

    cout << dp[N][1] << endl;
    return 0;
}
