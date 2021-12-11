#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


vector<pair<ll, ll>> PrimeFactorization(ll n){
    vector<pair<ll, ll>> ans;
    ll m = n;
    for (int i=2;i*i<=n;i++){
        ll index = 0;
        for (;;){
            if (m % i == 0){
                index++;
                m = m / i;
            }else{
                break;
            }
        }
        if (index > 0){
            ans.push_back(make_pair(i, index));
        }
    }
    if (m != 1)ans.push_back(make_pair(m, 1));
    return ans;
}

ll my_gcd(ll a, ll b){
    if (b == 0)return a;
    else return my_gcd(a, a % b);
}
int main(){
    vector<pair<ll, ll>>P = PrimeFactorization(6);

    return 0;
}
