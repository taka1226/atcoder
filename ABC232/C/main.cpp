#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 10;
//input
int N, M;
int x[MAX_N][MAX_N];
int y[MAX_N][MAX_N];
int main(){
    cin >> N >> M;
    //x, yを初期化
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            x[i][j] = 0;
            y[i][j] = 0;
        }
    }
    for (int i=0;i<M;i++){
        int a, b;
        cin >> a >> b;
        a--;b--;
        x[a][b] = 1;
        x[b][a] = 1;
    }
    for (int i=0;i<M;i++){
        int c, d;
        cin >> c >> d;
        c--;d--;
        y[c][d] = 1;
        y[d][c] = 1;
    }

    vector<int>p(N);
    iota(begin(p), end(p), 0);

    do{
        bool ok = true;
        for (int i=0;i<N;i++){
            for (int j=0;j<N;j++){
                if (x[i][j] != y[p[i]][p[j]]){
                    ok = false;
                }
            }
        }
        if (ok){
            cout << "Yes\n";
            return 0;
        }
    }while(next_permutation(p.begin(), p.end()));

    cout << "No\n";
    return 0;
}
