#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 200005;
//input
int N, M;
int cnt[MAX_N];

int main(){
    cin >> N >> M;
    vector<queue<int>> que(M);
    queue<int> Q;
    int k, a;
    vector<vector<int>> mem(N + 1);
    for (int i=0;i<M;i++){
        cin >> k;
        for (int j=0;j<k;j++){
            cin >> a;
            if (j == 0){
                cnt[a]++;
                if (cnt[a] == 2){
                    Q.push(a);
                }
            }
            que[i].push(a);
        }
        mem[que[i].front()].push_back(i);
    }

    //初期化
    int res = 0;
    while(!Q.empty()){
        int first_Q = Q.front();Q.pop();
        cnt[first_Q] -= 2;
        res++;
        for (auto& i : mem[first_Q]){
            que[i].pop();
            if (!que[i].empty()){
                int new_top = que[i].front();
                mem[new_top].push_back(i);
                cnt[new_top]++;
                if (cnt[new_top] == 2){
                    Q.push(new_top);
                }
            }

        }

    }

    if (res == N){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    // for (auto i : que){
    //     if (!i.empty()){
    //         printf("No\n");
    //         return 0;
    //     }
    // }
    // printf("Yes\n");
    return 0;
}
