#include<iostream>
#include<vector>

using namespace std;

//定数
const int MAX_N = 100005;

//入力
int N;
vector<int>V[MAX_N];

int main(){
    cin >> N;
    for (int i=1;i<N;i++){
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }


    for (int i=1;i<=N;i++){
        if (V[i].size() == N - 1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
