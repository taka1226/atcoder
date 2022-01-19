#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_M = 200005;
const int MAX_N = 10000;
const ll INF = (ll)1e32;
struct edge {
    int from;
    int to;
    ll cost;
};
int N, M;
edge E[MAX_M];
ll d[MAX_N];
int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        ll cos;
        cin >> E[i].from >> E[i].to >> cos;
        E[i].cost = -cos;
    }

    //初期化
    for (int i=1;i<=N;i++){
        d[i] = INF;
    }
    d[1] = 0;

    bool negative_flg = false;
    for (int i=0;i<2 * N;i++){
        for (int j=0;j<M;j++){
            edge e = E[j];
            if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                if (i >= N - 1 && e.to == N){
                    negative_flg = true;
                    break;
                }
            }
        }
    }

    if (negative_flg){
        cout << "inf" << endl;
        return 0;
    }
    cout << -d[N] << endl;
    return 0;
}
