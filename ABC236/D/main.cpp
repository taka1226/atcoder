#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_2N = 20;

//inputs
int N;
int A[MAX_2N + 2][MAX_2N + 2];
int ans;

void dfs(vector<bool> used, int x){
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
            dfs(used, x^A[si][i]);
            used[i] = false;
        }
    }
}


int main(){
    cin >> N;
    for (int i = 0; i < 2 * N; i++){
        for (int j = i + 1; j < 2 * N; j++){
            cin >> A[i][j];
            A[j][i] = A[i][j];
        }
    }

    vector<bool> used(2 * N);
    dfs(used, 0);


    cout << ans << endl;


    return 0;
}
