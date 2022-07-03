#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 15;

//inputs
int N;
int A[MAX_N][MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            char c;cin >> c;
            A[i][j] = c - '0';
        }
    }

    int dx[8] = {1,1,1,0,0,-1,-1,-1};
    int dy[8] = {1,0,-1,1,-1,1,0,-1};
    ll ans = -1;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            for (int k=0;k<8;k++){
                ll x = i;ll y = j;
                ll now = 0;
                for (int l=0;l<N;l++){
                    now *= 10;
                    now += A[x][y];
                    x += dx[k];
                    y += dy[k];
                    x %= N;
                    y %= N;
                    x += N;
                    y += N;
                    x %= N;
                    y %= N;
                }

                ans = max(ans, now);
            }
        }
    }

    cout << ans << endl;

}
