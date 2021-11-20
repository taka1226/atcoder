#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 100005;

//input
int K, N;
vector<pair<int, int>> V;
bool ans[MAX_N];

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first > b.first;
    }
}

int main(){
    cin >> N >> K;
    for (int i=1;i<=N;i++){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        V.push_back({i, p1 + p2 + p3});
    }

    sort(V.begin(), V.end(), compare_by_b);

    int border_point = V[K - 1].second;
    for (int i=0;i<N;i++){
        if (border_point > V[i].second){
            if (border_point - V[i].second <= 300){
                ans[V[i].first] = true;
            }else{
                ans[V[i].first] = false;
            }
        }else{
            ans[V[i].first] = true;
        }
    }

    for (int i=1;i<=N;i++){
        if (ans[i])printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
