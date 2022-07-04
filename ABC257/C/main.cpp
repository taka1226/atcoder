#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//const
const int MAX_N = 200005;
//inputs
int N;string S;
ll W[MAX_N];

int main(){
    cin >> N;
    cin >> S;
    vector<ll> V0;
    vector<ll> V1;

    for (int i=0;i<N;i++){
        cin >> W[i];
        if (S[i] == '1'){
            V1.push_back(W[i]);
        }else if (S[i] == '0'){
            V0.push_back(W[i]);
        }
    }
    sort(V0.begin(), V0.end());
    sort(V1.begin(), V1.end());
    ll max_f = -1;
    for (int i=0;i<N;i++){
        ll thres = W[i];
        int s = lower_bound(V0.begin(), V0.end(), thres) - V0.begin();
        int t = V1.end() - lower_bound(V1.begin(), V1.end(), thres);
        if (max_f < s + t){
            max_f = s + t;
        }

        thres = W[i] + 1;
        s = lower_bound(V0.begin(), V0.end(), thres) - V0.begin();
        t = V1.end() - lower_bound(V1.begin(), V1.end(), thres);
        if (max_f < s + t){
            max_f = s + t;
        }
    }



    cout << max_f << endl;

    return 0;
}
