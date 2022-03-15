#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int> vec = {1, 2, 10, 3, 3, 5, 7, 8};

    auto iter = vec.lower_bound(11);
    cout << (iter == vec.end()) << endl;

    // auto iter = vec.end();
    // cout << *iter << endl;
    // iter--;
    // cout << *iter << endl;
    return 0;
}
