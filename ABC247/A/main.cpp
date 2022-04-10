#include<bits/stdc++.h>
using namespace std;

//input
string S;

int main(){
    cin >> S;
    string T = "0000";
    T[1] = S[0];
    T[2] = S[1];
    T[3] = S[2];

    cout << T << endl;
    return 0;
}
