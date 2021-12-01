#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 100005;

//input
int N, h[MAX_N];
int dp[MAX_N];


void debug_dp(){
    for (int i=0;i<10;i++){
        cout << dp[i] << " ";
    }
    printf("\n");
}


int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> h[i];
    }

    int cand1, cand2;
    for (int i=1;i<=N;i++){
        if (i == 1 || i == 2){
            dp[i] = h[i];
        }else if (i > 2){
            cand1 = dp[i - 1] + abs(h[i] - h[i - 1]);
            cand2 = dp[i - 2] + abs(h[i] - h[i - 2]);

            dp[i] = min(cand1, cand2);

        }
    }

    cout << dp[N] << endl;

}
