#include<bits/stdc++.h>
using namespace std;

int R, C;
int A[2][2];

int main(){
    cin >> R >> C;
    R--;C--;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cin >> A[i][j];
        }
    }

    cout << A[R][C] << endl;
    return 0;
}
