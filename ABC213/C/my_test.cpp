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

template <typename T>
vector<T> coordinateCompression(vector<T> X){
    vector<T> tmp_X = X;
    sort(tmp_X.begin(), tmp_X.end());
    tmp_X.erase(unique(tmp_X.begin(), tmp_X.end()), tmp_X.end());

    vector<T> ans;
    for (int i=0;i<X.size();i++){
        T compressed = lower_bound(tmp_X.begin(), tmp_X.end(), X[i]) - tmp_X.begin();
        ans.push_back(compressed);
    }

    return ans;
}

int main(){
    cin >> H >> W >> N;
    for (int i=1;i<=N;i++){
        ll a, b;
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }

    vector<ll> new_A = coordinateCompression(A);
    vector<ll> new_B = coordinateCompression(B);

    for (int i=0;i<N;i++){
        cout << new_A[i] + 1 << " " << new_B[i] + 1 << endl;;
    }

    return 0;
}
