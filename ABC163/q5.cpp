#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;
#define rep(i,start, end) for (int i=(int)start;i<(int)(end);i++)

typedef long long ll;
pair<int, int>P;
// typedef pair<int, int> P;
//using P = pair<int, int>;

const ll INF = 1e18;
const int MX = 2005;
ll dp[MX][MX];
void chmax(ll& a, ll b){
    a = max(a,b);
}

int main(){
  int n;
  cin >> n;
  vector<int>a(n);
  rep(i, 0, n)cin >> a[i];
  rep(i, 0, n+1)rep(j, 0, n+1) dp[i][j] = -INF;
  dp[0][0] = 0;
  vector<P>p;
  rep(i, 0, n)p.emplace_back(a[i], i);
  sort(p.begin(), p.rend());
  rep(i, 0, n){
    int pi = p[i].second;
    rep(l, 0, i+1){
      int r = i-l;
      chmax(dp[i+1][l+1], dp[i][l] + ll(pi-l)*a[pi]);
      chmax(dp[i+1][l+1], dp[i][l] + ll((n-r-1)-pi)*a[pi]);

    }
  }
  ll ans = 0;
  rep(i, 0, n+1) chmax(ans, dp[n][i]);
  cout << ans << endl;
  return 0;

}
