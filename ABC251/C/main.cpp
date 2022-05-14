#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//input
int N;
int main(){
    cin >> N;
    vector<string> S(N);
    vector<ll> T(N);

    for (int i=0;i<N;i++){
        cin >> S[i] >> T[i];
    }

    map<string, ll> mp;
    ll ans = -1;
    int ans_index = -1;
    for (int i=0;i<N;i++){
        auto iter = mp.find(S[i]);
        if (iter == mp.end()){
            mp[S[i]] = T[i];
            if (ans < T[i]){
                ans = T[i];
                ans_index = i;
            }
        }
    }

    cout << ans_index + 1 << endl;
    return 0;
}
