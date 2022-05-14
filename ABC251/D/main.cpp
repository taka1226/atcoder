#include<bits/stdc++.h>
using namespace std;

//input
int W;

int main(){
    cin >> W;

    int hw = (W + 1) / 2;

    int n = 1;
    vector<int> ans;
    ans.push_back(1);
    while (n < hw){
        n *= 2;
        ans.push_back(n);
    }

    

    return 0;
}
