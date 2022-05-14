#include<bits/stdc++.h>
using namespace std;

//input
string S;

int main(){
    cin >> S;
    int N = 6 / S.length();

    for (int i=0;i<N;i++){
        cout << S;
    }
    cout << endl;
    return 0;
}
