#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//inputs
int Q;
multiset<ll> A;

ll solve2(ll x, int k){  //x以下のうち、大きい方からk番目
    auto iter = A.upper_bound(x);
    if (iter == A.begin()){
        return -1;
    }
    for (int i=0;i<k;i++){ //k回--
        if (iter == A.begin()){
            return -1;
        }
        iter--;
    }
    return *iter;
}

ll solve3(ll x, int k){ //x以上のうち、小さい方からk番目
    auto iter = A.lower_bound(x);
    if (iter == A.end()){
        return -1;
    }
    for (int i=0;i<k-1;i++){ //k-1回++
        iter++;
        if (iter == A.end()){
            return -1;
        }
    }
    return *iter;
}

int main(){
    cin >> Q;
    for (int i=0;i<Q;i++){
        int c;ll x;int k;
        cin >> c;
        if (c == 1){
            cin >> x;
            A.insert(x);
        }else if (c == 2){
            cin >> x >> k;
            cout << solve2(x, k) << endl;

        }else if (c == 3){
            cin >> x >> k;
            cout << solve3(x, k) << endl;
        }
    }

    return 0;
}
