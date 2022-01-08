#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//input
ll K;
vector<ll> ans;
int main(){
    cin >> K;
    while (K > 0){
        ans.push_back(K % 2);
        K = K / 2;
    }

    reverse(ans.begin(), ans.end());
    for (int i=0;i<ans.size();i++){
        cout << ans[i] * 2;
    }
    cout << endl;
    return 0;
}
