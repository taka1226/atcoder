#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

std::vector<bool> IsPrime;

void sieve(size_t max){
    if(max+1 > IsPrime.size()){     // resizeで要素数が減らないように
        IsPrime.resize(max+1,true); // IsPrimeに必要な要素数を確保
    }
    IsPrime[0] = false; // 0は素数ではない
    IsPrime[1] = false; // 1は素数ではない

    for(size_t i=2; i*i<=max; ++i) // 0からsqrt(max)まで調べる
        if(IsPrime[i]) // iが素数ならば
            for(size_t j=2; i*j<=max; ++j) // (max以下の)iの倍数は
                IsPrime[i*j] = false;      // 素数ではない
}

ll N;
int main(){
    cin >> N;
    ll max_p = 31622;
    ll max_q = 793700;
    sieve(max_q);

    vector<ll> cnt(max_q+1);
    for (ll i=1;i<=max_q;i++){
        cnt[i] = cnt[i-1];
        if (IsPrime[i])cnt[i]++;
    }


    ll q = max_q;
    ll ans = 0;
    for (ll p=2;p<=max_p;p++){
        while (p * pow(q, 3) > N){
            q--;
        }
        if (p >= q || !IsPrime[p]) continue;
        ans += cnt[q] - cnt[p];
    }

    cout << ans << endl;
    return 0;
}
