#include<bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

//const
const int MAX_N = 200005;

//inputs
int N, M;
int A[MAX_N], B[MAX_N];
vector<int> G[MAX_N];

int main(){
    cin >> N >> M;
    for (int i=0;i<M;i++){
        int a, b;cin >> a >> b;
        G[a].emplace_back(b);
    }

    dsu d(N+1);
    vector<int> V;
    int ans = 0;
    V.emplace_back(ans);
    for (int i=N;i>=2;i--){
        ans++;
        for (auto j : G[i]){
            if (!d.same(j, i)){
                d.merge(j, i);
                ans--;
            }
        }
        V.emplace_back(ans);
    }

    reverse(V.begin(), V.end());
    for (auto v : V){
        cout << v << endl;
    }
    return 0;
}
