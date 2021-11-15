#include<bits/stdc++.h>
using namespace std;

string S[4];
string T;

int main(){
    cin >> S[1];
    cin >> S[2];
    cin >> S[3];
    cin >> T;

    string ans = "";
    for (int i=0;i<T.size();i++){
        int no_s = T[i] - '0';
        ans += S[no_s];
    }

    cout << ans << endl;
    return 0;
}
