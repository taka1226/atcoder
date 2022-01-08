#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//input
ll X;
vector<ll> d;
int main(){
    cin >> X;
    while (X > 0){
        d.push_back(X % 10);
        X = X / 10;
    }
    reverse(d.begin(), d.end());

    for (int i=d[0];i<=9;i++){
        int start = 0;
        if (i == d[0])start = d[1];
        for (int j=start;j<=9;j++){
            int diff = j - i;
            int a = i + (diff * (d.size() - 1));
            if (a < 0 || a > 9) continue;

            bool flag = true;
            vector<int>cand;
            for (int k=0;k<d.size();k++){
                if (d[k] > i){
                    flag = false;
                }else{
                    cand.push_back(i);
                    i += diff;
                }
                //cout << i << endl;
            }
            if (!flag)continue;

            for (auto& p : cand){
                cout << p;
            }
            cout << endl;
            return 0;
            // ll cand = 0;
            // for (int k=d.size() - 1;k>=0;k--){
            //     cand += (ll)i * (ll)pow(10, k);
            //     i += (ll)diff;
            // }
            //
            // if (cand >= X){
            //     cout << cand << endl;
            //     return 0;
            // }

        }
    }
    return 0;
}
