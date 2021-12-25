#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 200005;

int N;
ll K;
ll A[MAX_N];
ll S[MAX_N];
int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    for (int i=1;i<=N;i++){
        S[i] = S[i-1] + A[i-1];
    }

    map<ll, ll> mp;
    ll ans = 0;
    for (int i=1;i<=N;i++){
        mp[S[i-1]]++;
        ans += mp[S[i] - K];
    }

    cout << ans << endl;
    return 0;
}
