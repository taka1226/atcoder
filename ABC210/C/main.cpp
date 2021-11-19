#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 300005;
//input
int N, K;
ll C[MAX_N];
map<int, int> mp;

int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> C[i];
    }

    for (int i=0;i<K;i++){
        mp[C[i]]++;
    }

    ll ans = mp.size();
    for (int i=K;i<N;i++){
        mp[C[i]]++;
        mp[C[i - K]]--;
        if (mp[C[i - K]] == 0)mp.erase(C[i - K]);
        ans = max(ans, (ll)mp.size());
    }

    cout << ans << endl;


    return 0;
}
