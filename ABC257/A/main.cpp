#include<bits/stdc++.h>
using namespace std;

//inputs
int N, X;

int main(){
    cin >> N >> X;
    int a = (X - 1) / N;
    char ans = 'A' + a;
    cout << ans << endl;

    return 0;
}
