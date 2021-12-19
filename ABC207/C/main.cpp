#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
//const
const int MAX_N = 2005;
//input
int N;
pair<double, double> P[MAX_N];
int main(){
    cin >> N;
    double delta = 0.01;
    for (int i=0;i<N;i++){
        int t, l, r;
        double new_l, new_r;
        cin >> t >> l >> r;
        if (t == 1){
            new_r = (double)r;
            new_l = (double)l;
        }else if (t == 2){
            new_r = (double)(r - delta);
            new_l = (double)l;
        }else if (t == 3){
            new_l = (double)(l + delta);
            new_r = (double)r;
        }else if (t == 4){
            new_r = (double)(r - delta);
            new_l = (double)(l + delta);
        }

        P[i] = make_pair(new_l, new_r);
    }

    // for (int i=0;i<N;i++){
    //     cout << P[i].first << " " << P[i].second << endl;
    // }

    ll ans = 0;
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (P[i].second >= P[j].first && P[j].second >= P[i].first){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
