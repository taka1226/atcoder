#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 100005;

//input coordinate compression
ll H, W, N;
vector<ll> A;
vector<ll> B;

ll ansA[MAX_N], ansB[MAX_N];


int main(){
    cin >> H >> W >> N;
    for (int i=1;i<=N;i++){
        ll a, b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }

    vector<ll>tmpA = A;
    vector<ll>tmpB = B;

    sort(tmpA.begin(), tmpA.end());
    sort(tmpB.begin(), tmpB.end());

    tmpA.erase(unique(tmpA.begin(), tmpA.end()), tmpA.end());
    tmpB.erase(unique(tmpB.begin(), tmpB.end()), tmpB.end());

    for (int i=0;i<A.size();i++){
        ansA[i] = lower_bound(tmpA.begin(), tmpA.end(), A[i]) - tmpA.begin();
        ansB[i] = lower_bound(tmpB.begin(), tmpB.end(), B[i]) - tmpB.begin();

    }

    for (int i=0;i<N;i++){
        cout << ansA[i] + 1 << " " << ansB[i] + 1 << endl;
    }
    return 0;

}
