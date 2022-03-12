#include<bits/stdc++.h>
using namespace std;

//input
int V, A, B, C;
int main(){
    cin >> V >> A >> B >> C;

    int v = V % (A + B + C);

    if (v < A){
        cout << "F" << endl;
        return 0;
    }

    if (v < A + B){
        cout << "M" << endl;
        return 0;
    }

    if (v < A + B + C){
        cout << "T" << endl;
    }
    return 0;
}
