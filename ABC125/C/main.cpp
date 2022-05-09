#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 100005;
const int MAX_ST = 1 << 17;

//inputs
int N;
ll A[MAX_N];

int n;
ll dat[2 * MAX_ST - 1];

ll gcd(ll a, ll b){
    if (a % b == 0){
        return b;
    }else{
        return gcd(b, a % b);
    }
}

//初期化
void init(int n_){
    n = 1;
    while (n < n_) n *= 2;

    for (int i=0;i<2 * n - 1;i++){
        dat[i] = 0;
    }
}

void update(int k, ll a){
    k += n - 1;
    dat[k] = a;
    while (k > 0){
        k = (k - 1) / 2;
        dat[k] = gcd(dat[k * 2 + 1], dat[k * 2 + 2]);
    }
}

ll query(int a, int b, int k, int l, int r){
    if (r <= a || b <= l) return 1LL;
    if (a <= l && r <= b) return dat[k];
    else {
        ll vl = query(a, b, k * 2 + 1, l, (l + r) / 2);
        ll vr = query(a, b, k * 2 + 2, (l + r) / 2, r);
        return gcd(vl, vr);
    }
}


int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }
    init(N);
    for (int i=0;i<n;i++){
        update(i, A[i]);
    }

    // ll ans = query(1, 2, 0, 0, n);
    // cout << ans << endl;

    return 0;
}
