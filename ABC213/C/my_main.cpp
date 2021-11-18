#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 100005;
const ll MAX_H = 1000000005;
const ll MAX_W = 1000000005;
//input
ll H, W, N;
ll A[MAX_N], B[MAX_N];

ll pre_a[MAX_N];
ll pre_b[MAX_N];
ll blank_a[MAX_N];
ll blank_b[MAX_N];

int main(){
    cin >> H >> W >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i] >> B[i];
    }


    for (int i=1;i<=N;i++){
        for (int j=i;j<=N;j++){
            if (A[i] > A[j]){
                pre_a[i]++;
            }
            if (A[i] < A[j]){
                pre_a[j]++;
            }
            if (B[i] > B[j]){
                pre_b[i]++;
            }
            if (B[i] < B[j]){
                pre_b[j]++;
            }
        }
    }

    for (int i=1;i<=N;i++){
        blank_a[i] = A[i] - 1 - pre_a[i];
        blank_b[i] = B[i] - 1 - pre_b[i];
    }

    for (int i=1;i<=N;i++){
        cout << A[i] - blank_a[i] << " " << B[i] - blank_b[i] << endl;
    }
    return 0;
}
