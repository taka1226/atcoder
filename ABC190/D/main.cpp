#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//input
ll N;

vector<pair<ll, ll>> solve(ll n){
    vector<pair<ll, ll>> res;
    for (ll i=1;i*i<=n;i++){
        //cout << i << endl;
        if (n % i == 0){
            ll sum_i = n / i + i;
            if (sum_i % 2 == 1){
                res.push_back(make_pair(i, n / i));
            }
        }
    }
    return res;
}
int main(){
    cin >> N;
    vector<pair<ll, ll>> ans = solve(2 * N);
    cout << ans.size() * 2 << endl;
    return 0;
}
