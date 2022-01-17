#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 1e5 + 5;
const ll INF = (ll)1e15;
//input
int N, M;
ll T;
ll A[MAX_N];
vector<pair<int, ll>> G[MAX_N];
vector<pair<int, ll>> rG[MAX_N];
priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> Q;

ll d[MAX_N];
ll rd[MAX_N];
int main(){
    cin >> N >> M >> T;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }
    for (int i=1;i<=M;i++){
        int a, b;ll c;cin >> a >> b >> c;
        G[a].push_back(make_pair(b, c));
        rG[b].push_back(make_pair(a, c));  //逆向き
    }

    //初期化
    for (int i=1;i<=N;i++){
        d[i] = INF;
    }
    d[1] = 0;
    Q.push(make_pair(0, 1));
    while (!Q.empty()){
        auto u_pair = Q.top();Q.pop();
        int u = u_pair.second;
        ll cost = u_pair.first;
        if (d[u] < cost) continue;

        for (auto& v_pair : G[u]){
            int v = v_pair.first;
            ll e = v_pair.second;
            if (d[v] > d[u] + e){
                d[v] = d[u] + e;
                Q.push(make_pair(d[v], v));
            }
        }
    }

    //帰り道
    //初期化
    for (int i=1;i<=N;i++){
        rd[i] = INF;
    }
    rd[1] = 0;
    Q.push(make_pair(0, 1));
    while (!Q.empty()){
        auto u_pair = Q.top();Q.pop();
        int u = u_pair.second;
        ll cost = u_pair.first;
        if (rd[u] < cost) continue;
        for (auto& v_pair : rG[u]){
            int v = v_pair.first;
            ll e = v_pair.second;
            if (rd[v] > rd[u] + e){
                rd[v] = rd[u] + e;
                Q.push(make_pair(rd[v], v));
            }
        }
    }

    ll ans = 0;
    for (int i=1;i<=N;i++){
        //cout << d[i] << " " << rd[i] << endl;;
        if (d[i] + rd[i] <= T){
            ll both_d = d[i] + rd[i];
            ans = (ll)max((T - both_d) * A[i], ans);
        }
    }

    cout << ans << endl;

    return 0;
}
