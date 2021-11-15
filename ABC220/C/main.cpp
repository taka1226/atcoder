#include <iostream>
using namespace std;

//constant
const int MAX_N = 100005;

typedef long long ll;

int N;
ll X;
ll A[MAX_N];

int main(){
    cin >> N;
    ll one_group_sum = 0;
    for (int i=0;i<N;i++){
        cin >> A[i];
        one_group_sum += A[i];
    }
    cin >> X;

    ll ans = 0;
    ll group_num = X / one_group_sum;
    ans = group_num * N;

    ll reminder = X % one_group_sum;

    ll ans_reminder = 0;
    for (int i=0;i<N;i++){
        ans_reminder += A[i];
        if (ans_reminder > reminder){
            ans += i + 1;
            break;
        }
    }

    printf("%lld\n", ans);

    return 0;

}
