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
bool visited[MAX_V];
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
        visited[i] = false;
    }

    d[r] = 0;
    Q.push(make_pair(0LL, r));
    while (!Q.empty()){
        pair<ll, int> u = Q.top();Q.pop();
        visited[u.second] = true;

        for (auto& v : G[u.second]){
            if (!visited[v.first]){
                d[v.first] = min(u.first + v.second, d[v.first]);
                Q.push(make_pair(d[v.first], v.first));
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
