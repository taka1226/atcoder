#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 405;
const int INF = 1e9;
//input
int N, M;
//d[x][y] は x->y のコスト
int d[MAX_N][MAX_N];
int f[MAX_N][MAX_N][MAX_N];
int main(){
    cin >> N >> M;
    //d の初期化
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            d[i][j] = INF;
        }
    }
    for (int i=0;i<M;i++){
        int a, b, c;
        cin >> a >> b >> c;
        d[a][b] = c;
    }

    for (int k=0;k<=N;k++){
        for (int i=1;i<=N;i++){
            for (int j=1;j<=N;j++){
                if (k == 0){
                    f[i][j][k] = d[i][j];
                    if (i == j){
                        f[i][j][k] = 0;
                    }
                    continue;
                }
                f[i][j][k] = min(f[i][j][k-1], f[i][k][k-1] + f[k][j][k-1]);

            }
        }
    }

    ll ans = 0;
    for (int i=1;i<=N;i++){
        for (int j=1;j<=N;j++){
            for (int k=1;k<=N;k++){
                if (f[i][j][k] < INF){
                    ans += (ll)f[i][j][k];
                }
            }
        }
    }

    cout << ans << endl;



    return 0;
}
