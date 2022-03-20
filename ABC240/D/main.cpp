#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 200005;

//inputs
int N;
int A[MAX_N];
vector<pair<int, int>> V;

int main(){
    cin >> N;
    for (int i=1;i<=N;i++){
        cin >> A[i];
    }

    int total_cnt = 0;
    for (int i=1;i<=N;i++){
        if (V.size() >= 1){
            int n = V.size();
            int ball = V[n-1].first;
            int cnt = V[n-1].second;
            if (ball == A[i]){
                cnt++;
                if (ball == cnt){
                    V.erase(V.end() - 1);
                    total_cnt -= (cnt - 1);
                }else{
                    V[n-1] = make_pair(ball, cnt);
                    total_cnt++;
                }
            }else{
                V.push_back(make_pair(A[i], 1));
                total_cnt++;
            }
        }else{
            V.push_back(make_pair(A[i], 1));
            total_cnt++;
        }

        cout << total_cnt << endl;
    }
    return 0;
}
