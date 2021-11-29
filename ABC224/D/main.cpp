#include<bits/stdc++.h>
using namespace std;

//input
int M;
vector<int> G[10];

int main(){
    cin >> M;
    int u, v;
    for (int i=0;i<M;i++){
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    string s = "999999999";
    int t;
    for (int i=1;i<=8;i++){
        cin >> t;
        s[t - 1] = i + '0';
    }

    queue<string> que;
    map<string, int> mp;
    que.push(s);
    mp[s] = 0;
    while (!que.empty()){
        //まず9の位置を探す
        s = que.front();que.pop();
        for (int i=1;i<=9;i++){
            if (s[i - 1] == '9') v = i;
        }
        for (auto u : G[v]){
            string tt = s;
            swap(tt[u - 1], tt[v - 1]);
            if (mp.count(tt))continue;
            mp[tt] = mp[s] + 1;
            que.push(tt);
        }
    }

    if (mp.count("123456789") == 0) cout << -1 << endl;
    else cout << mp["123456789"] << endl;
    return 0;
}
