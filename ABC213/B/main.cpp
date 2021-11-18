#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
int N;
vector<ll> A;

//座標圧縮
//ベクターで返す
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
    cin >> N;
    for (int i=0;i<N;i++){
        ll a;
        cin >> a;
        A.push_back(a);
    }

    vector<ll> newA = coordinateCompression(A);


    for (int i=0;i<N;i++){
        if (newA[i] == N - 2){
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}
