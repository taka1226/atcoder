#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 200005;

//input
int N, M;
vector<int> G[MAX_N];
bool visited[MAX_N];
int indigree[MAX_N];
priority_queue<int, vector<int>, greater<int>> que;
vector<int> out;

int main(){
    cin >> N >> M;
    int u, v;
    for (int i=0;i<M;i++){
        cin >> u >> v;
        G[u].push_back(v);
        indigree[v]++;
    }

    //visited 配列の初期化
    for (int i=1;i<=N;i++){
        visited[i] = false;
    }

    for (int i=1;i<=N;i++){
        if (!visited[i] && indigree[i] == 0){
            que.push(i);
            visited[i] = true;
        }
    }

    while (!que.empty()){
        u = que.top();que.pop();
        out.push_back(u);
        for (int i=0;i<G[u].size();i++){
            v = G[u][i];
            indigree[v]--;
            if (!visited[v] && indigree[v] == 0){
                que.push(v);
                visited[v] = true;
            }
        }
    }

    if (out.size() == N){
        for (int i=0;i<out.size() - 1;i++){
            cout << out[i] << " ";
        }
        cout <<  out[out.size() - 1] << endl;
    }else{
        printf("-1\n");
    }

    return 0;
}
