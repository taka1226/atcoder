#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 35;

//inputs
int N;
int A[MAX_N][MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        A[i][0] = 1;
        A[i][i] = 1;
    }
    for (int i=1;i<N;i++){
        for (int j=1;j<i;j++){
            A[i][j] = A[i-1][j-1] + A[i-1][j];
        }
    }

    for (int i=0;i<N;i++){
        for (int j=0;j<=i;j++){
            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
