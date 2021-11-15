#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 205;

//input
int N;
char S[MAX_N][MAX_N];
char T[MAX_N][MAX_N];

char S_new[MAX_N][MAX_N];
int S_top_i, S_top_j, T_top_i, T_top_j;

void my_rotate(int angle, char A[MAX_N][MAX_N], char B[MAX_N][MAX_N]){  //左回転
    //回転したあとの配列はBに保存する
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            if (angle == 90) B[i][j] = A[j][N - 1 - i];
            else if (angle == 180) B[i][j] = A[N - 1 - i][N - 1 - j];
            else if (angle == 270) B[i][j] = A[N - 1 - j][i];
            else if (angle == 0) B[i][j] = A[i][j];
            else return;
        }
    }

    return;
}

void find_left_top(char A[MAX_N][MAX_N], int* ans_i, int* ans_j){
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            // cout << A[i][j] << endl;
            // cout << i << " " << j << endl;
            if (A[i][j] == '#'){
                *ans_i = i;
                *ans_j = j;
                return;
            }
        }
    }
}

bool my_is_same(char A[MAX_N][MAX_N], char B[MAX_N][MAX_N], int offset_i, int offset_j){
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            int ii = i + offset_i;
            int jj = j + offset_j;
            if (0 <= ii && ii < N && 0 <= jj & jj < N){
                if (A[i][j] != B[ii][jj]) return false;
            }else{
                if (A[i][j] == '#') return false;
            }
        }
    }

    return true;
}


void debug(char C[MAX_N][MAX_N]){
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cout << C[i][j];
        }
        cout << endl;
    }
}


int main(){
    cin >> N;
    int S_num = 0;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            char s;
            cin >> s;
            if(s == '#') S_num++;
            S[i][j] = s;
        }
    }

    int T_num = 0;
    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            char s;
            cin >> s;
            if (s == '#')T_num++;
            T[i][j] = s;
        }
    }

    if (S_num != T_num){
        printf("No\n");
        return 0;
    }


    int angles[] = {0, 90, 180, 270};
    for (int i=0;i<4;i++){
        int angle = angles[i];
        my_rotate(angle, S, S_new);
        find_left_top(S_new, &S_top_i, &S_top_j);
        find_left_top(T, &T_top_i, &T_top_j);

        int offset_i = T_top_i - S_top_i;
        int offset_j = T_top_j - S_top_j;

        if (my_is_same(S_new, T, offset_i, offset_j)){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");

    return 0;
}
