#include<bits/stdc++.h>
using namespace std;
const int MAX_V = 1005;
const int MAX_E = 2005;
const int INF = 1e9;
struct edge {
    int from;
    int to;
    int cost;
};

edge E[MAX_E];
int d[MAX_V];
int v, e, r;
int main(){
    cin >> v >> e >> r;
    for (int i=0;i<e;i++){
        cin >> E[i].from >> E[i].to >> E[i].cost;
    }

    for (int i=0;i<v;i++){
        d[i] = INF;
    }
    d[r] = 0;
    bool negative_flg = false;
    for (int i=0;i<v;i++){
        for (int j=0;j<e;j++){
            edge ed = E[j];
            if (d[ed.from] != INF && d[ed.to] > d[ed.from] + ed.cost){
                d[ed.to] = d[ed.from] + ed.cost;
                if (i == v - 1){
                    negative_flg = true;
                    break;
                }
            }
        }
    }

    if (negative_flg){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }

    for (int i=0;i<v;i++){
        if (d[i] == INF){
            cout << "INF" << endl;
        }else{
            cout << d[i] << endl;
        }
    }
    return 0;
}
