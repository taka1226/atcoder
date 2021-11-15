#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll N;

//output
string ans;

int main(){
    cin >> N;
    while (N > 0){
        if (N % 2 == 0){
            ans.insert(0, "B");
            N = N / 2;
        }else{
            ans.insert(0, "A");
            N = N - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
