#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//セグメントツリーのテンプレート
// 0-indexed
template<class Monoid> struct SegTree {
    using Func = function<Monoid(Monoid, Monoid)>;
    const Func F;
    const Monoid UNITY;
    int SIZE_R;
    vector<Monoid> dat;

    SegTree(int n, const Func f, const Monoid &unity): F(f), UNITY(unity) { init(n); }
    void init(int n){
        SIZE_R = 1;
        while (SIZE_R < n) SIZE_R *= 2;
        dat.assign(SIZE_R * 2, UNITY);
    }

    void set(int a, const Monoid &v){ dat[a + SIZE_R] = v; }
    void build() {
        for (int k = SIZE_R - 1; k > 0; k--){
            dat[k] = F(dat[k * 2], dat[k * 2 + 1]);
        }
    }

    void update(int a, const Monoid &v){
        int k = a + SIZE_R;
        dat[k] = v;
        while (k >>= 1) dat[k] = F(dat[k * 2], dat[k * 2 + 1]);
    }

    // query [a, b)
    Monoid query(int a, int b){
        Monoid vleft = UNITY, vright = UNITY;
        for (int left = a + SIZE_R, right = b + SIZE_R; left < right; left >>= 1, right >>= 1) {
           if (left & 1) vleft = F(vleft, dat[left++]);
           if (right & 1) vright = F(dat[--right], vright);
       }
       return F(vleft, vright);
    }

    inline Monoid operator [] (int a){ return dat[a + SIZE_R]; }

    /* debug */
    void print(){
        for (int i=0;i<SIZE_R;i++){
            cout << dat[i];
            if (i != SIZE_R - 1) cout << ",";
        }
        cout << endl;
    }
};

ll GCD(ll a, ll b){
    return b ? GCD(b, a % b) : a;
}

//const
const int MAX_N = 100005;
//input
int N;
ll A[MAX_N];

int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    SegTree<ll> seg(N, [](ll a, ll b){
        return GCD(a, b);
    }, 0);
    for (int i=0;i<N;i++){
        seg.set(i, A[i]);
    }
    seg.build();

    ll ans = 0;
    for (int i=0;i<N;i++){
        ll s = seg.query(0, i);
        ll t = seg.query(i+1, N);
        ll res = GCD(s, t);
        ans = max(res, ans);
    }

    cout << ans << endl;

    return 0;
}
