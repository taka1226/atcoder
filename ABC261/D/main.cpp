#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 5005;

//inputs
int N, M;
ll X[MAX_N];
ll B[MAX_N];

ll dp[MAX_N][MAX_N];

int main(){
	cin >> N >> M;
	for (int i=1;i<=N;i++){
		cin >> X[i];
	}
	for (int i=0;i<MAX_N;i++){
		B[i] = 0LL;
	}
	for (int i=0;i<M;i++){
		int c;ll y;cin >> c >> y;
		B[c] = y;
	}

	//ip の初期化
	for (int i=0;i<MAX_N;i++){
		for (int j=0;j<MAX_N;j++){
			dp[i][j] = -LLONG_MAX;
		}
	}

	for (int i=0;i<=MAX_N;i++){
		dp[i][0] = 0LL;
	}
	for (int i=0;i<=MAX_N;i++){
		dp[0][i] = 0LL;
	}
	for (int i=1;i<=N;i++){
		for (int j=1;j<=i;j++){
			dp[i][j] = max(dp[i-1][j-1] + X[i] + B[j], dp[i][j]);
			dp[i][0] = max(dp[i-1][j-1], dp[i][0]);
		}
	}

	ll ans = -1;
	for (int i=0;i<=N;i++){
		ans = max(ans, dp[N][i]);
	}

	cout << ans << endl;
	return 0;
}
