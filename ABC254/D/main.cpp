#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//inputs
ll N;

//約数列挙
ll DivisorEnum(ll n){
    vector<pair<ll, ll>> ans;
    for (ll i=1;i*i<=n;i++){
        if (n % i == 0){
            if (n / i != i){
                if (n / i <= N){
                    ans.emplace_back(i, n / i);
                    ans.emplace_back(n / i, i);
                }
            }else{
                ans.emplace_back(i, i);
            }
        }
    }
    return (ll)(ans.size());
}

int main(){
    cin >> N;
    ll res = 0;
    for (ll i=1;i<=N;i++){
        ll root = i * i;
        res += DivisorEnum(root);
    }
    cout << res << endl;
    return 0;
}
