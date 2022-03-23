#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 998244353;

int GetDigit(ll num){
    return to_string(num).length();
}

//inputs
ll N;
int main(){
    cin >> N;

    int digit = GetDigit(N);
    ll ans = 0;
    for (int i=1;i<=digit;i++){
        ll start_num = ((ll)pow(10, i-1) - ((ll)pow(10, i-1) - 1)) % mod;
        ll end_num = ((ll)pow(10, i) - 1 - ((ll)pow(10, i-1) - 1)) % mod;

        if (i == digit){
            end_num = (N - ((ll)pow(10, i-1) - 1)) % mod;
        }

        ll a = (start_num + end_num) % mod;
        ll b = (end_num - start_num + 1) % mod;
        ll product = (a * b / 2) % mod;
        ans = (ans + product) % mod;

    }

    cout << ans << endl;
    return 0;
}
