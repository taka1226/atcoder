#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 200005;
//input
int N, Q;
ll a[MAX_N];
ll x[MAX_N];
int k[MAX_N];

map<ll, vector<int>>mp;
int main(){
    cin >> N >> Q;
    for (int i=1;i<=N;i++){
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    for (int i=0;i<Q;i++){
        cin >> x[i] >> k[i];
        k[i]--;
    }

    for (int i=0;i<Q;i++){
        if (mp.count(x[i]) == 0){
            cout << -1 << endl;
        }else{
            if (mp[x[i]].size() <= k[i]){
                cout << -1 << endl;
            }
            else{
                cout << mp[x[i]][k[i]] << endl;

            }
        }
    }

    return 0;
}
