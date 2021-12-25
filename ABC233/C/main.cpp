#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX_N = 100;
//input
ll N;
ll X;
ll L[MAX_N];
vector<ll> a[MAX_N];
int main(){
    cin >> N >> X;
    for (ll i=1;i<=N;i++){
        cin >> L[i];
        for (ll j=0;j<L[i];j++){
            ll A;cin >> A;
            a[i].push_back(A);
        }
    }

    ll all_cases = 1;
    for (ll i=1;i<=N;i++){
        all_cases *= L[i];
    }

    ll cnt = 0;
    for (ll i=0;i<all_cases;i++){
        ll temp = i;
        ll res = 1;
        bool flag = true;
        for (ll j=1;j<=N;j++){
            if (res > X){
                flag = false;
                continue;
            }
            ll c = temp % L[j];
            res *= a[j][c];
            temp = temp / L[j];
        }
        if (!flag){
            continue;
        }
        if (res == X){
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
