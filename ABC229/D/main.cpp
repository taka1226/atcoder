#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//const
const int MAX_N = 200005;

//input
string S;
int K;

int cnt[MAX_N];

int main(){
    cin >> S;
    cin >> K;

    int n = S.size();
    for (int i=0;i<n;i++){
        if (S[i] == '.')cnt[i+1] = cnt[i] + 1;
        else cnt[i+1] = cnt[i];
    }

    int r = 0;
    ll ans = 0;
    for (int l=0;l<n;l++){
        while (cnt[r+1] - cnt[l] <= K && r < n){
            r++;
        }
        ans = max(ans, (ll)(r - l));
    }

    cout << ans << endl;



    return 0;
}
