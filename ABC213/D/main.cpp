#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 200005;

//input
int N;
vector<int>G[MAX_N];

bool visited[MAX_N];

void dfs(int u, int past = -1){
    if (u != 1){
        printf(" ");
    }
    cout << u;
    for (auto& i : G[u]){
        if (i != past){
            dfs(i, u);
            cout << " " << u;
        }
    }
}


int main(){
    cin >> N;
    for (int i=0;i<N-1;i++){
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    //初期化
    for (int i=1;i<=N;i++){
        visited[i] = false;
        sort(G[i].begin(), G[i].end());
    }
    dfs(1);
    cout << endl;


    return 0;
}
