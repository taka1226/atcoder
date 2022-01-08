#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 105;
//input
int N;
int X[MAX_N], Y[MAX_N];
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> X[i] >> Y[i];
    }

    int ans2 = -1;
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            int d = (X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]);
            ans2 = max(ans2, d);
        }
    }
    double ans = sqrt(ans2);
    //cout << sqrt(ans2) << endl;
    cout<< std::fixed << std::setprecision(10) << ans << endl;
    return 0;
}
