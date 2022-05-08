#include<bits/stdc++.h>
using namespace std;
const int MAX_A = 200;
const int MAX_B = 200;

int N, A, B;
char M[MAX_A][MAX_B];
int main(){
    cin >> N >> A >> B;

    for (int i=0;i<N;i++){
        for (int j=0;j<N;j++){
            for (int k=0;k<A;k++){
                for (int l=0;l<B;l++){
                    if ((i + j) % 2 == 0){
                        M[i * A + k][j * B + l] = '.';
                    }else{
                        M[i * A + k][j * B + l] = '#';
                    }
                }
            }
        }
    }

    for (int i=0;i<N * A;i++){
        for (int j=0;j<N * B;j++){
            cout << M[i][j];
        }
        cout << endl;
    }
    return 0;
}
