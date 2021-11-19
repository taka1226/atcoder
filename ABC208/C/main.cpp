#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 200005;

//input
int N;
ll K;
ll a[MAX_N];

vector<pair<int, int>> V;
ll ans[MAX_N];

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
    cin >> N >> K;
    for (int i=0;i<N;i++){
        cin >> a[i];
        V.push_back({i, a[i]});
    }

    // b順にソート
    sort(V.begin(), V.end(), compare_by_b);

    ll initial_point = K / N;
    for (int i=0;i<N;i++){
        ans[i] = initial_point;
    }
    ll reminder = K - N * initial_point;
    for (int i=0;i<reminder;i++){
        ans[V[i].first]++;
    }
    

    for (int i=0;i<N;i++){
        cout << ans[i] << endl;
    }


    return 0;
}
