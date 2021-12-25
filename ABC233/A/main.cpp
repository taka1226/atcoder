#include<bits/stdc++.h>
using namespace std;

//input
int X, Y;
int main(){
    cin >> X >> Y;
    if (X >= Y){
        cout << 0 << endl;
        return 0;
    }else{
        int dif = Y - X;
        if (dif % 10 == 0){
            cout << dif / 10 << endl;
        }else{
            cout << dif / 10 + 1 << endl;
        }
    }
    return 0;
}
