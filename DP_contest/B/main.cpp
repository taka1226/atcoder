#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 100005;
const ll INF = 1e16;

//input
int N, K;
int h[MAX_N];

ll dp[MAX_N];

int main(){
    cin >> N >> K;
    for (int i=1;i<=N;i++){
        cin >> h[i];
    }

    for (int i=1;i<=N;i++){
        dp[i] = INF;
    }

    for (int i=1;i<=N;i++){
        if (i == 1){
            dp[i] = 0;
        }else{
            for (int j=max(i-K, 1);j<=i-1;j++){
                dp[i] = min(dp[i], dp[j] + (ll)abs(h[j] - h[i]));
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}
