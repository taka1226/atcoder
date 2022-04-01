#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 105;
const int MAX_M = 105;
const int MAX_NM = 210;
typedef long long ll;

//inputs
int N, M;
ll A[MAX_NM];
ll B[MAX_NM];
ll C[MAX_NM];
int main(){
    cin >> N >> M;
    for (int i=0;i<=N;i++){
        cin >> A[i];
    }
    for (int i=0;i<=N+M;i++){
        cin >> C[i];
    }

    for (int i=0;i<=M;i++){
        B[M-i] = C[N+M-i];
        for (int j=N-1;j>=0;j--){
            B[M-i] -= A[j] * B[N+M-i-j];
        }
        B[M-i] = B[M-i] / A[N];
    }

    for (int i=0;i<=M;i++){
        if (i == M){
            cout << B[i] << endl;
        }else{
            cout << B[i] << " ";
        }
    }
    return 0;
}
