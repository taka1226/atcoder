#include<bits/stdc++.h>
using namespace std;
//const
const int MAX_N = 100005;
//input
int N;
double A[MAX_N], B[MAX_N];
int main(){
    cin >> N;

    double seconds = 0;
    for (int i=0;i<N;i++){
        cin >> A[i] >> B[i];
        seconds += A[i] / B[i];
    }

    double take_seconds = seconds / 2;
    double ans = 0;
    for (int i=0;i<N;i++){
        double t = (double)A[i] / (double)B[i];
        if (take_seconds >= t){
            take_seconds -= t;
            ans += A[i];
        }else{
            ans += take_seconds * B[i];
            break;
        }

    }

    cout<< std::fixed << std::setprecision(10) << ans << endl;


    return 0;
}
