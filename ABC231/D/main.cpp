#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 100005;

//input
int N, M;
int cnt[MAX_N];

bool visited[MAX_N];
vector<int> G[MAX_N];


int par[MAX_N]; // 親
int treeRank[MAX_N]; // 木の深さ

//n要素で初期化
void init(int n){
    for (int i=0;i<n;i++){
        par[i] = i;
        treeRank[i] = 0;
    }
}

//木の根を求める
int find(int x){
    if (par[x] == x){
        return x;
    }else{
        return par[x] = find(par[x]);
    }
}

//xとyの属する集合を併合
void unite(int x, int y){
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (treeRank[x] < treeRank[y]){
        par[x] = y;
    }else{
        par[y] = x;
        if (treeRank[x] == treeRank[y])treeRank[x]++;
    }
}

int main(){
    cin >> N >> M;

    bool hasLoop = false;
    init(N);
    for (int i=0;i<M;i++){
        int a, b;cin >> a;cin >> b;

        cnt[a]++;
        cnt[b]++;

        if (find(a) == find(b)){
            hasLoop = true;
        }
        unite(a, b);
    }

    for (int i=1;i<=N;i++){
        if (cnt[i] >= 3){
            printf("No\n");
            return 0;
        }
    }

    if (hasLoop){
        printf("No\n");
        return 0;
    }

    printf("Yes\n");





    return 0;
}
