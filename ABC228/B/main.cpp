#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 100005;

//input
int N, X;
int A[MAX_N];
bool ans[MAX_N];

int main(){
    cin >> N >> X;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }

    for (int i=1;i<=N;i++){
        ans[i] = false;
    }

    int teller = X;
    ans[teller] = true;
    int cnt = 1;
    while(1){
        teller = A[teller];
        if (ans[teller]) break;
        ans[teller] = true;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
