#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 20;
const int MAX_2N = pow(2, 20); //1 << 20
const int INF = pow(2, 20); // 1 << 30

//inputs
int V, E;
int G[MAX_N][MAX_N];

int dp[MAX_2N][MAX_N];

int main(){
    cin >> V >> E;
    //G の初期化
    for (int i=0;i<V;i++){
        for (int j=0;j<V;j++){
            G[i][j] = INF;
        }
    }

    for (int i=0;i<E;i++){
        int s, t, d;
        cin >> s >> t >> d;
        G[s][t] = d; //s = start, t = end
    }

    //dp の初期化
    for (int i=0; i<pow(2, V); i++){
        for (int j=0;j<V;j++){
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    for (int i=0; i<pow(2, V); i++){
        for (int j=0;j<V;j++){
            if ((i >> j) & 1){
                for (int k=0;k<V;k++){
                    int i_hat = i - (1 << j);
                    if (i_hat >> k & 1 || i_hat == 0){
                        dp[i][j] = min(dp[i][j], dp[i_hat][k] + G[k][j]);

                    }
                }
            }
        }
    }

    // for (int i=0; i<pow(2, V);i++){
    //     for (int j=0;j<V;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int all_visited = pow(2, V) - 1;
    if (dp[all_visited][0] >= INF){
        cout << -1 << endl;
    }else{
        cout << dp[all_visited][0] << endl;

    }
    return 0;
}
