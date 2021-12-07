#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 200010;
//input
int N;
vector<pair<ll, ll>> P;

int main(){
    cin >> N;
    ll a, b;
    for (int i=0;i<N;i++){
        cin >> a >> b;
        P.push_back({a, 1});
        P.push_back({a + b, -1});
    }

    //ソート
    sort(P.begin(), P.end());

    ll cnt = 0;
    ll ans[MAX_N];
    for (int i=0;i<=N;i++){
        ans[i] = 0;
    }
    for (int i=0;i<P.size()-1;i++){
        cnt += P[i].second;
        ans[cnt] += (P[i+1].first - P[i].first);
    }

    for (int i=1;i<=N-1;i++){
        cout << ans[i] << " ";
    }
    cout << ans[N] << endl;


    return 0;
}
