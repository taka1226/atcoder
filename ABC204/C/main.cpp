#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 2005;
//input
int N, M;
vector<int> V[MAX_N];
bool visited[MAX_N];
set<pair<int, int>> st;
void init_visited(){
    for (int i=1;i<=N;i++){
        visited[i] = false;
    }
}
void dfs(int u, int start){
    visited[u] = true;
    st.insert(make_pair(start, u));
    for (auto& v : V[u]){
        if (!visited[v]){
            dfs(v, start);
        }
    }
}

int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b;cin >> a >> b;
        V[a].push_back(b);
    }

    for (int i=1;i<=N;i++){
        init_visited();
        dfs(i, i);
    }

    cout << st.size() << endl;
    return 0;
}
