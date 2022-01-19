#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 105;
const ll INF = 1e18;
int N, M;
ll dis[MAX_N][MAX_N];
int main(){
    cin >> N >> M;

    //dis の初期化
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (i == j){
                dis[i][j] = 0LL;
            }else{
                dis[i][j] = INF;
            }
        }
    }
    for (int i=0;i<M;i++){
        int s, t;ll d;cin >> s >> t >> d;
        dis[s][t] = d;
    }

    //ワーシャルフロイド
    for (int k=0;k<N;k++){
        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                if (dis[i][k] != INF && dis[k][j] != INF){
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
    }

    //negative cycle
    for (int i=0;i<N;i++){
        if (dis[i][i] < 0){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (dis[i][j] == INF){
                cout << "INF";
            }else{
                cout << dis[i][j];
            }

            if (j < N - 1) cout << " ";
        }
        printf("\n");
    }
    return 0;
}
