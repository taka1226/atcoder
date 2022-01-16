#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//const
const int MAX_N = 100005;
//input
int N;
ll H[MAX_N];
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> H[i];
    }

    ll ans = H[0];
    for (int i=1;i<=N;i++){
        if (H[i-1] < H[i]){
            ans = H[i];
        }else{
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}
