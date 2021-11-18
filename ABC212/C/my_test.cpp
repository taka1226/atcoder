#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int>a  = {2, 17, 22, 24, 35, 39, 67};
    int b = lower_bound(a.begin(), a.end(), 61) - a.begin();
    cout << b << endl;
    return 0;
}
