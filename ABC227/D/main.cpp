#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 200005;

//input
int K, N;
ll A[MAX_N];

//プロジェクトの数
bool possible(ll p){
    ll sum = 0;
    for (int i=0;i<N;i++){
        sum += min(A[i], p);
    }

    return sum >= K * p;
}

int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    ll lh = 0;
    ll rh = 1e18 / K;
    ll mid = 0;
    for (int i=0;i<100;i++){
        mid = (lh + rh) / 2;
        if (possible(mid)){
            lh = mid;
        }else{
            rh = mid;
        }
    }

    cout << lh << endl;

    return 0;
}
