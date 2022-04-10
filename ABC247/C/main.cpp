#include<bits/stdc++.h>
using namespace std;

//input
int N;

 solve(int n){
    if (n == 1) return "1";
    else{
        return solve(n-1) + to_string(n) + solve(n-1);
    }
}
int main(){
    cin >> N;
    string ans = solve(N);
    cout << ans.size() << endl;
    // for (int i=0;i<ans.size();i++){
    //     cout << ans[i] << " ";
    //     if (i == ans.size() - 1){
    //         cout << endl;
    //     }
    // }
    return 0;
}
