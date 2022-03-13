#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_N = 100005;
//inputs
string S;
int Q;
ll T[MAX_N], K[MAX_N];
vector<int> pos; //前か後ろかを判定する

//S(t) の 1文字目
pair<ll, ll> solve(ll t, ll k){
    if (k == 1 || t == 0){
        return make_pair(t, k);
    }else{
        pos.push_back((k + 1) % 2);
        return solve(t - 1, (k + 1) / 2);
    }
}
int main(){
    cin >> S;
    cin >> Q;

    string perm;
    if (S[0] == 'A'){
        perm = "ABC";
    }else if (S[0] == 'B'){
        perm = "BCA";
    }else if (S[0] == 'C'){
        perm = "CAB";
    }

    for (int i=0;i<Q;i++){
        pos.clear();
        cin >> T[i] >> K[i];
        auto root = solve(T[i], K[i]);
        char init;
        if (root.first >= 1){
            init = perm[root.first % 3];
        }else if (root.first == 0){
            init = S[root.second - 1];
        }

        if (pos.size() >= 1){
            reverse(pos.begin(), pos.end());

            int cnt = 0;
            for (auto ele : pos){
                cnt++;
                cnt += ele;
            }

            string perm2;
            if (init == 'A'){
                perm2 = "ABC";
            }else if (init == 'B'){
                perm2 = "BCA";
            }else if (init == 'C'){
                perm2 = "CAB";
            }

            cout << perm2[cnt % 3] << endl;

        }else{
            cout << init << endl;
        }
    }







    return 0;
}
