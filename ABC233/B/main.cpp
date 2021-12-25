#include<bits/stdc++.h>
using namespace std;

//input
int L, R;
string S;
int main(){
    cin >> L >> R;
    L--;R--;
    cin >> S;

    string ans = S;
    int sum_lr = L + R;
    for (int i=L;i<=R;i++){
        ans[sum_lr - i] = S[i];
    }

    cout << ans << endl;

    return 0;
}
