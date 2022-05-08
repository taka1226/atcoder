#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 200005;
const int MAX_Q = 200005;

//input
int N, Q;
int X[MAX_Q];

int pos[MAX_N]; //ボール番号で位置を検索する

int main(){
    cin >> N >> Q;
    for (int i=0;i<Q;i++){
        int x;cin >> x;x--;
        X[i] = x;
    }
    vector<int> V(N);
    for (int i=0;i<N;i++){
        V[i] = i;
        pos[i] = i;
    }

    for (int i=0;i<Q;i++){
        int u = X[i];
        int u_pos = pos[u];

        int v;
        if (u_pos == N-1){ //右とswap
            v = V[u_pos - 1];
            swap(V[u_pos - 1], V[u_pos]);
            pos[u] = u_pos - 1;
            pos[v] = u_pos;
        }else{
            v = V[u_pos + 1];
            swap(V[u_pos], V[u_pos + 1]);
            pos[u] = u_pos + 1;
            pos[v] = u_pos;
        }
    }

    for (int i=0;i<V.size() -1;i++){
        cout << V[i] + 1 << " ";
    }
    cout << V.back() + 1 << endl;
    return 0;
}
