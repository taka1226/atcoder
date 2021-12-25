#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
ll K;
int main(){
    cin >> N >> K;
    vector<ll> A(N);
    for (int i=0;i<N;i++){
        ll a;cin >> a;
        if (i == 0)A[i] = a;
        else A[i] = A[i-1] + a;
    }
    vector<ll> A_temp = A;
    sort(A_temp.begin(), A_temp.end());

    ll ans = 0;
    for (int i=0;i<=N;i++){
        ll s;
        if (i == 0) s = 0;
        else s = A_temp[i-1]; //start

        ll t = s + K;
        ans += upper_bound(A_temp.begin(), A_temp.end(), t) - lower_bound(A_temp.begin(), A_temp.end(), t);
    }

    cout << ans << endl;

    //cout << ans <<endl;
    return 0;
}
