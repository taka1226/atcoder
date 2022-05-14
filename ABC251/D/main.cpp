#include<bits/stdc++.h>
using namespace std;

//input
int W;

int main(){
    cin >> W;

    vector<int> ans;
    ans.push_back(1);
    for (int i=1;i<100;i++){
        ans.push_back(i);
    }

    for (int i=1;i<100;i++){
        ans.push_back(i * 1e2);
    }

    for (int i=1;i<100;i++){
        ans.push_back(i * 1e4);
    }

    cout << ans.size() << endl;
    for (auto ele : ans){
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
