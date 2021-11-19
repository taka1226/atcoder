#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 100;

//input
int N, X;
int A[MAX_N];

int main(){
    cin >> N >> X;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int sum = 0;
    for (int i=0;i<N;i++){
        if (i % 2 == 1){
            sum += A[i] - 1;
        }else{
            sum += A[i];
        }
    }

    if (sum > X){
        printf("No\n");
        return 0;
    }

    printf("Yes\n");
    return 0;
}
