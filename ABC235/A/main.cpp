#include<bits/stdc++.h>
using namespace std;

//input
char S[3];
int main(){
    cin >> S;
    int a = S[0] - '0';
    int b = S[1] - '0';
    int c = S[2] - '0';

    int v1 = a * 100 + b * 10 + c;
    int v2 = b * 100 + c * 10 + a;
    int v3 = c * 100 + a * 10 + b;
    cout << v1 + v2 + v3 << endl;

    return 0;
}
