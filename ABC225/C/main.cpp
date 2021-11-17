#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 10005;
const int MAX_M = 10;

typedef long long ll;

//input
int N, M;
ll B[MAX_N][MAX_M];


int main(){
    cin >> N >> M;
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cin >> B[i][j];
        }
    }

    for (int i=0;i<N;i++){
        bool flag = false;
        for (int j=0;j<M;j++){
            if (B[i][j] % 7 == 0){
                flag = true;
            }else{
                if (flag){
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
    for (int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            if (B[i][j] != B[0][0] + 7 * i + j){
                printf("No\n");
                return 0;
            }
        }
    }

    printf("Yes\n");
    return 0;
}
