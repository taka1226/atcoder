#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_V = 100005;
const ll INF = 1LL << 32;
//input
int V, E, r;
vector<pair<int, ll> >G[MAX_V];
ll d[MAX_V];
priority_queue<pair<ll, int>, vector<pair<ll, int> >, greater<pair<ll, int> > > Q;
int main(){
    cin >> V >> E >> r;
    for (int i=0;i<E;i++){
        int s, t;ll d;cin >> s >> t >> d;
        G[s].push_back(make_pair(t, d));
    }

    //d の初期化
    for (int i=0;i<V;i++){
        d[i] = INF;
    }
    d[r] = 0;
    Q.push(make_pair(0LL, r));
    while (!Q.empty()){
        pair<ll, int> u_pair = Q.top();Q.pop();
        ll cost = u_pair.first;
        int u = u_pair.second;
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

    for (int i=0;i<V;i++){
        if (d[i] == INF){
            cout << "INF" << endl;
        }else{
            cout << d[i] << endl;

        }
    }
    return 0;
}
