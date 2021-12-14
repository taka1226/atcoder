#include<bits/stdc++.h>
using namespace std;

//input
int N;
map<string, int> mp;
int main(){
    cin >> N;
    for (int i=0;i<N;i++){
        string S;cin >> S;
        mp[S]++;
    }

    int max_cnt = -1;
    string ans;
    for (auto [key, value] : mp){
        if (value > max_cnt){
            ans = key;
            max_cnt = value;
        }
    }
    cout << ans << endl;
    return 0;
}
