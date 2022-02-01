#include<bits/stdc++.h>
using namespace std;

int N;
string S;

int main(){
    cin >> N;
    cin >> S;

    deque<int>dq;
    dq.push_front(N);

    for (int i=N-1;i>=0;i--){
        if (S[i] == 'L'){
            dq.push_back(i);

        }else if (S[i] == 'R'){
            dq.push_front(i);
        }
    }

    for (auto i : dq){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
