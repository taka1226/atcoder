#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 100005;
const ll INF = 1e10;
//input
int N, Q;
ll A[MAX_N];
ll K[MAX_N];
ll C[MAX_N];
int main(){
    cin >> N >> Q;
    vector<ll>C(N+1);
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }
    for (int i=1;i<=Q;i++){
        cin >> K[i];
    }

    for (int i=1;i<=N;i++){
        C[i] = A[i] - i;
    }

    for (int i=1;i<=Q;i++){
        if (C[N] < K[i]){
            cout << A[N] + K[i] - C[N] << endl;
        }else{
            int idx = lower_bound(C.begin(), C.end(), K[i]) - C.begin();

            cout << A[idx-1] + K[i] - C[idx-1] << endl;

        }

    }





    return 0;
}
