#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_P = 30001;
ll N, A, B;
ll P, Q, R, S;
ll j;
ll start_1, end_1, start_2, end_2;

int main(){
    cin >> N >> A >> B;
    cin >> P >> Q >> R >> S;

    for (ll i=P;i<=Q;i++){
        for (ll k=R;k<=S;k++){
            if (i - k == A - B){
                cout << '#';
            }else if (i + k == A + B){
                cout << '#';
            }else{
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}
