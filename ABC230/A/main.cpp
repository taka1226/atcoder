#include<bits/stdc++.h>
using namespace std;

int N;

int main(){
    cin >> N;

    if (N >= 42){
        N += 1;
    }

    string ans;
    ans = "AGC";
    cout << ans << setw(3) << setfill('0') << N << endl;
    return 0;
}
