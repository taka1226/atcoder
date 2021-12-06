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

// C++ program to demonstrate lower_bound()
// and upper_bound() in Vectors of Pairs

#include <bits/stdc++.h>
using namespace std;

// Function to implement lower_bound()
int findLowerBound(vector<mypair>& arr,
                    mypair& p)
{
    // Given iterator points to the
    // lower_bound() of given pair
    auto low = lower_bound(arr.begin(), arr.end(), p);

    return low - arr.begin();
}


int main(){
    cin >> N >> D;
    vector<mypair> P(N);
    for (int i=0;i<N;i++){
        cin >> P[i].first >> P[i].second;
    }

    //P[i].first でソート
    sort(P.begin(), P.end(), [](mypair& a, mypair& b) { return a.second < b.second; });

    ll start = P[0].second;
    ll end;
    int idx;
    ll res = 0;
    while (1){
        end = start + D;
        mypair p = {end, -INF};
        idx = findLowerBound(P, p);
        start = P[idx].second;
        res++;
        if (idx >= N)break;
    }

    cout << res << endl;

    return 0;
}
