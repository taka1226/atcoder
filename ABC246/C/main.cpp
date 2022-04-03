#include<bits/stdc++.h>
using namespace std;

using ll = int64_t;

//const
const int MAX_N = 200005;

//inputs
ll N;
ll K, X;
vector<ll> A;

ll my_max(ll a, ll b){
    if (a > b) return a;
    else return b;
}

int main(){
    cin >> N >> K >> X;
    for (int i=0;i<N;i++){
        ll a;cin >> a;
        A.push_back(a);
    }

    ll sum_A = 0;
    for (auto v : A){
        sum_A += v;
    }

    sort(A.begin(), A.end(), greater<ll>());
    //まず A[i] がマイナスにならないように引いていく。
    ll cnt_n = 0;
    for (auto& v : A){
        ll d = v / X;
        cnt_n += d;
        v -= d * X;
    }

    if (cnt_n >= K){
        //output ans
        sum_A -= K * X;
        cout << sum_A << endl;
        return 0;
    }

    K -= cnt_n;
    sort(A.begin(), A.end(), greater<ll>());

    ll ans = 0;
    for (auto& v : A){
        if (K > 0){
            v -= X;
            v = my_max(0LL, v);
            K--;
        }
        ans += v;
    }

    cout << ans << endl;
    return 0;
}
