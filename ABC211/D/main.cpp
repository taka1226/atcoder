#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 200005;
const ll INF = 1e13;

//input
int N, M;
vector<int>G[MAX_N];
int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    queue<int> que;
    ll d[MAX_N];
    bool visited[MAX_N];
    ll cnt[MAX_N];
    //初期化
    for (int i=1;i<=N;i++){
        d[i] = INF;
        visited[i] = false;
        cnt[i] = 0;
    }
    que.push(1);
    d[1] = 0;
    cnt[1] = 1;
    visited[1] = true;
    while (!que.empty()){
        int u = que.front();
        que.pop();
        for (auto& v : G[u]){
            if (!visited[v]){
                d[v] = min(d[v], d[u] + 1);
                que.push(v);
                visited[v] = true;

                if (d[v] == d[u] + 1){
                    cnt[v] = cnt[u];
                }
            }
            else{
                if (d[v] == d[u] + 1){
                    cnt[v] = (cnt[v] + cnt[u]) % (ll)(1e9 + 7);
                }
            }

        }
    }



    cout << cnt[N] << endl;

    return 0;
}
