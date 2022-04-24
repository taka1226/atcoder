#include<bits/stdc++.h>
using namespace std;

//inputs
int N, K;
vector<string> V;
int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        string s;cin >> s;V.push_back(s);
    }

    int max_cand = -1;
    for (int bit = 0; bit < (1<<N); bit++){
        string v = "";
        map<char, int> mp;
        int ans = 0;
        for (int i = 0; i < N; i++){
            if (bit & (1 << i)){
                v += V[i];
            }
        }
        for (auto u : v){
            mp[u]++;
        }
        for (auto m : mp){
            if (m.second == K){
                ans++;
            }
        }
        max_cand = max(max_cand, ans);
    }

    cout << max_cand << endl;
    return 0;
}
