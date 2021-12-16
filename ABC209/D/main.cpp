#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 100005;
const int BLACK = 1;
const int WHITE = 0;
//input
int N, Q;
vector<int> G[MAX_N];
int c[MAX_N], d[MAX_N];
int main(){
    cin >> N >> Q;
    for (int i=0;i<N-1;i++){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i=0;i<Q;i++){
        cin >> c[i] >> d[i];
    }

    queue<int> que;
    int color[MAX_N];
    bool visited[MAX_N];
    //初期化
    for (int i=1;i<=N;i++){
        visited[i] = false;
    }
    que.push(1);
    color[1] = BLACK;
    visited[1] = true;
    while (!que.empty()){
        int u = que.front();
        que.pop();
        for (auto& v : G[u]){
            if (!visited[v]){
                que.push(v);
                visited[v] = true;
                if (color[u] == BLACK){
                    color[v] = WHITE;
                }else if (color[u] == WHITE){
                    color[v] = BLACK;
                }
            }
        }
    }

    for (int i=0;i<Q;i++){
        if (color[c[i]] == color[d[i]]){
            printf("Town\n");
        }else{
            printf("Road\n");
        }
    }
    return 0;
}
