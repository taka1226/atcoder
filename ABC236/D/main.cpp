#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_2N = 20;

//inputs
int N;
int A[MAX_2N + 2][MAX_2N + 2];
bool used[MAX_2N + 2];
int ans;

void dfs(int x){
    int si = -1;
    for (int i=0; i<N * 2; i++){
        if (!used[i]){
            si = i; break;
        }
    }
    if (si == -1){
        ans = max(ans, x);
        return;
    }

    used[si] = true;
    for (int i=0;i<N * 2;i++){
        if (!used[i] && si != i){
            used[i] = true;
            dfs(x^A[si][i]);
            used[i] = false;
        }
    }
    used[si] = false; //used を固定長配列にした場合は これが必要だった。
}


int main(){
    cin >> N;
    for (int i = 0; i < 2 * N; i++){
        for (int j = i + 1; j < 2 * N; j++){
            cin >> A[i][j];
            A[j][i] = A[i][j];
        }
    }

    for (int i=0;i<2 * N;i++){
        used[i] = false;
    }
    vector<bool> V(2 * N);
    dfs(0);


    cout << ans << endl;


    return 0;
}
