#include<bits/stdc++.h>
#include<atcoder/dsu>
using namespace std;
using namespace atcoder;

//input
int N;
int main(){
    cin >> N;
    vector<tuple<int, int, int>> edge(N - 1);
    for (auto& [w, u, v]: edge){
        cin >> u >> v >> w;
        u--;
        v--;
    }

    sort(edge.begin(), edge.end());

    long long ans = 0;
    dsu d(N);
    for (auto& [w, u, v]: edge){
        ans += (long long)d.size(u) * d.size(v) * w;
        d.merge(u, v);
    }

    cout << ans << endl;
    return 0;
}
