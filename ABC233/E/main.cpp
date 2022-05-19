#include<bits/stdc++.h>
using namespace std;

//inputs
string X;

int main(){
    cin >> X;
    int s = 0, c = 0;
    for (auto &nx : X){
        s += (nx - '0');
    }
    string res;
    for (int i=X.size() - 1;;i--){
        c += s;
        res.push_back('0' + (c % 10));
        c /= 10;
        if (i >= 0){
            s -= X[i] - '0';
        }
        if (i <= 0 && c == 0) break;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}
