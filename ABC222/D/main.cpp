#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//const
const int MAX_N = 3005;

//input
int N;
int A[MAX_N], B[MAX_N];

ll R[MAX_N][MAX_N];

void debug_R(){
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout << R[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }
    for (int i=0;i<N;i++){
        cin >> B[i];
    }

    for (int i=0;i<N;i++){
        for (int j=A[i];j<=B[i];j++){
            if (j == 0){
                R[i + 1][j] = 1;

            }else if (A[i] <= j && j <= B[i]){
                R[i + 1][j] = (R[i + 1][j - 1] + R[i][j]) % 998244353;

            }else{
                R[i + 1][j] = R[i + 1][j - 1];
            }
        }
    }

    debug_R();
    cout << N << " " << B[N] << endl;
    cout << R[N][B[N - 1] - 1] << endl;

    return 0;
}
