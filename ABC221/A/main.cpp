#include <iostream>
#include <cmath>

using namespace std;

int A, B;
int main(){
    cin >> A >> B;
    int ans = pow(32, A - B);
    cout << ans << endl;

    return 0;
}
