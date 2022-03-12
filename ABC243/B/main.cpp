#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 1005;
//inputs
int N;
int A[MAX_N];
int B[MAX_N];

map<int, int> mpA;
map<int, int> mpB;
int main(){
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
        mpA[i] = A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
        mpB[i] = B[i];
    }

    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (mpA[i] == mpB[j]){
                if (i == j){
                    cnt1++;
                }else{
                    cnt2++;
                }
            }
        }
    }

    cout << cnt1 << endl;
    cout << cnt2 << endl;
    return 0;
}
