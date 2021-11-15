#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 200005;

int N;
int P[MAX_N];
int Q[MAX_N];

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> P[i];
    }

    for (int i=1;i<=N;i++){
        Q[P[i]] = i;
    }

    for (int i=1;i<=N - 1;i++){
        cout << Q[i] << " ";
    }
    cout << Q[N] << endl;
    return 0;
}
