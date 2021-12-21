#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 105;
//input
int N, M;
int A[MAX_N], B[MAX_N];
int K;
int C[MAX_N][2];
int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        cin >> A[i] >> B[i];
    }
    cin >> K;
    for (int i=0;i<K;i++){
        cin >> C[i][0] >> C[i][1];
    }

    int max_cnt = -100;
    for (int bit=0;bit<(1<<K);bit++){
        vector<int> V(N+1);
        for (int i=0;i<K;i++){
            int bit2 = (bit & (1 << i));
            if (bit2 >= 1){
                bit2 = 1;
            }
            V[C[i][bit2]]++;
        }


        //条件チェック
        int cnt = 0;
        for (int i=0;i<M;i++){
            if (V[A[i]] >=1 && V[B[i]] >= 1){
                cnt++;
            }
        }
        //cout << cnt << endl;
        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt << endl;

    return 0;
}
