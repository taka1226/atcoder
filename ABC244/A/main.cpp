#include<bits/stdc++.h>
using namespace std;

int N;
int main(){
    cin >> N;
    cout << setfill('0') << right << setw(2) << N % 100 << endl;
    return 0;
}
