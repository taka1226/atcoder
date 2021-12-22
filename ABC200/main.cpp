#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 200005;

//input
int N;
ll A[MAX_N];
int reminder[MAX_N];
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> A[i];
        reminder[i] = A[i] % 200;
    }

    map<int, ll> mp;
    for (int i=0;i<N;i++){
        mp[reminder[i]]++;
    }

    ll ans = 0;
    for (auto& [key, value] : mp){
        ans += (value * (value - 1)) / 2;
    }

    cout << ans << endl;
    return 0;
}
