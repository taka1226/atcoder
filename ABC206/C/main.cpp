#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 300005;
//input
int N;
ll A[MAX_N];

map<ll, int> mp;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
        mp[A[i]]++;
    }

    int sum_cnt = 0;
    for (auto& [key, value] : mp){
        sum_cnt += value;
    }

    ll ans = 0;
    for (int i=0;i<N;i++){
        ans += (sum_cnt-mp[A[i]]);
    }

    cout << ans / 2 << endl;
    return 0;
}
