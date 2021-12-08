#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 2005;
//input
int N;

int main(){
    cin >> N;
    vector<pair<ll, ll>> P(N);
    for (int i=0;i<N;i++){
        cin >> P[i].first >> P[i].second;
    }

    //Pをソート
    sort(P.begin(), P.end());

    ll ans = 0;
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (P[i].first < P[j].first && P[i].second < P[j].second){
                if (binary_search(P.begin(), P.end(), make_pair(P[i].first, P[j].second)) && binary_search(P.begin(), P.end(), make_pair(P[j].first, P[i].second))){
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}
