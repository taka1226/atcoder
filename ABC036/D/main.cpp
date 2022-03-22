#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 100005;
const int WHITE = 0;
const int BLACK = 1;
const ll mod = 1000000007;

//inputs
int N;
ll dp[2][MAX_N];
vector<ll> V[MAX_N];
bool visited[MAX_N];

void dfs(int u){
    visited[u] = true;
    dp[WHITE][u] = 1;
    dp[BLACK][u] = 1;

    for (auto& v : V[u]){
        if (!visited[v]){
            dfs(v);
            dp[WHITE][u] = ((dp[WHITE][u] % mod) * (dp[WHITE][v] + dp[BLACK][v])) % mod;
            dp[BLACK][u] = ((dp[BLACK][u] % mod) * (dp[WHITE][v] % mod)) % mod;
        }
    }
}

int main(){
    cin >> N;
    for (int i=1;i<=N-1;i++){
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    //visited の初期化
    for (int i=1;i<=N;i++){
        visited[i] = false;
    }

    dfs(1);

    cout << (dp[WHITE][1] + dp[BLACK][1]) % mod << endl;


    return 0;
}
