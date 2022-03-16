#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 1005;

//inputs
int N;
char field[MAX_N][MAX_N];
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cin >> field[i][j];
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (i + 5 < N){
                int cnt = 0;
                for (int k=0;k<6;k++){
                    if (field[i+k][j] == '#') cnt++;
                }

                if (cnt >= 4) {
                    printf("Yes\n");
                    return 0;
                }
            }

            if (j + 5 < N){
                int cnt = 0;
                for (int k=0;k<6;k++){
                    if (field[i][j+k] == '#') cnt++;
                }

                if (cnt >= 4){
                    printf("Yes\n");
                    return 0;
                }
            }

            if (i + 5 < N && j + 5 < N){
                int cnt = 0;
                for (int k=0;k<6;k++){
                    if (field[i+k][j+k] == '#'){
                        cnt++;
                    }
                }

                if (cnt >= 4){
                    printf("Yes\n");
                    return 0;
                }
            }

            if (i - 5 >= 0 && j + 5 < N){
                int cnt = 0;
                for (int k=0;k<6;k++){
                    if (field[i-k][j+k] == '#'){
                        cnt++;
                    }
                }

                if (cnt >= 4){
                    printf("Yes\n");
                    return 0;

                }
            }
        }
    }

    printf("No\n");
    return 0;
}
