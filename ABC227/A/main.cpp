#include<bits/stdc++.h>
using namespace std;

int N, K, A;


int main(){
    cin >> N >> K >> A;

    int r = N - A + 1;
    int reminder = (K - r) % N;
    if (reminder < 0){
        reminder += N;
    }

    if (reminder == 0){
        cout << N << endl;
    }else{
        cout << reminder << endl;
    }
    return 0;
}
