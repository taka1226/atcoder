#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_E = 200005;
const int MAX_N = 200005;
const ll INF = 1e18;

int N, M;
ll H[MAX_N];
vector<pair<int, ll>> G[MAX_N];
ll d[MAX_N];

priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > Q;

ll calc_cost(int u, int v){ //uからvに向かう
    ll ans;
    if (H[u] >= H[v]){
        ans = 0;
    }else if (H[u] < H[v]){
        ans = H[u] - H[v];
    }

    return -ans;  //-1 倍掛ける
}
int main(){
    cin >> N >> M;
    for (int i=1;i<=N;i++){
        cin >> H[i];
    }

    for (int i=1;i<=M;i++){
        int u, v;
        cin >> u >> v;
        ll cost1 = calc_cost(u, v);
        G[u].push_back(make_pair(v, cost1));

        ll cost2 = calc_cost(v, u);
        G[v].push_back(make_pair(u, cost2));
    }

    //dの初期化
    for (int i=1;i<=N;i++){
        d[i] = INF;
    }
    d[1] = 0;
    Q.push(make_pair(0LL, 1));
    ll ans = -INF;
    while (!Q.empty()){
        pair<ll, int> u_pair = Q.top();Q.pop();
        ll cost = u_pair.first;
        int u = u_pair.second;
        if (d[u] < cost) continue;
        ans = max(ans, H[1] - d[u] - H[u]);
        for (auto& v_pair : G[u]){
            int v = v_pair.first;
            ll e = v_pair.second;
            if (d[v] > d[u] + e){
                d[v] = d[u] + e;
                Q.push(make_pair(d[v], v));
            }
        }
    }

    cout << ans << endl;
    return 0;
}
