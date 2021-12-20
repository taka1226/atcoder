#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 105;

//input
int H, W;
char C[MAX_N][MAX_N];
int d[MAX_N][MAX_N];

int main(){
    cin >> H >> W;
    for (int i=1;i<=H;i++){
        for (int j=1;j<=W;j++){
            cin >> C[i][j];
        }
    }

    //初期化
    for (int i=1;i<=H;i++){
        for (int j=1;j<=W;j++){
            d[i][j] = -1000;
        }
    }
    queue<pair<int, int>> que;
    que.push(make_pair(1, 1));
    d[1][1] = 1;
    while (!que.empty()){
        pair<int, int> u = que.front();
        que.pop();

        bool flag = false;
        if (C[u.first][u.second + 1] != '#' && u.first <= H && u.second + 1 <= W){
            if (d[u.first][u.second + 1] == -1000){
                que.push(make_pair(u.first, u.second + 1));
            }
            d[u.first][u.second + 1] = max(d[u.first][u.second] + 1, d[u.first][u.second + 1]);
            flag = true;

        }
        if (C[u.first + 1][u.second] != '#' && u.first + 1 <= H && u.second <= W){
            if (d[u.first + 1][u.second] == -1000){
                que.push(make_pair(u.first + 1, u.second));
            }
            d[u.first + 1][u.second] = max(d[u.first][u.second] + 1, d[u.first + 1][u.second]);

            flag = true;
        }

        if (!flag){
            continue;
        }


    }

    int ans = -1000;
    for (int i=1;i<=H;i++){
        for (int j=1;j<=W;j++){
            if (d[i][j] >= ans){
                ans = d[i][j];
            }


        }
    }

    cout << ans << endl;
    return 0;
}
