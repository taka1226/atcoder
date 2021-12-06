#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> mypair;

//const
const int MAX_N = 200005;
const ll INF = 1e12;

//input
int N;
ll D;

int main(){
    cin >> N >> D;
    vector<mypair> P(N);

    for (int i=0;i<N;i++){
        cin >> P[i].first >> P[i].second;
    }

    //P[i].second でソートする
    sort(P.begin(), P.end(), [](mypair& a, mypair& b){
        return a.second < b.second;
    });

    ll last = P[0].second + D;
    ll res = 1;
    for (int i=1;i<N;i++){
        if (P[i].first < last)continue;
        res++;
        last = P[i].second + D;
    }

    cout << res << endl;
    return 0;
}
