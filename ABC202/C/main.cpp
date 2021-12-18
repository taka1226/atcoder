#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 100005;
//input
int N;
int A[MAX_N], B[MAX_N], C[MAX_N];

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }
    for (int i=1;i<=N;i++){
        cin >> B[i];
    }
    for (int i=1;i<=N;i++){
        cin >> C[i];
    }

    //まず、C を回す
    int B_c[MAX_N];
    for (int i=1;i<=N;i++){
        B_c[i] = B[C[i]];
    }

    map<int, ll> mpA;
    map<int, ll> mpB;
    for (int i=1;i<=N;i++){
        mpA[A[i]]++;
        mpB[B_c[i]]++;
    }

    ll ans = 0;
    for (auto& [key, value] : mpA){
        ll add_ans = mpA[key] * mpB[key];
        ans += add_ans;
    }

    cout << ans << endl;
    return 0;
}
