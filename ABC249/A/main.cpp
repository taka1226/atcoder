#include<bits/stdc++.h>
using namespace std;

//inputs
int a, b, c, d, e, f, x;
int main(){
    cin >> a >> b >> c >> d >> e >> f >> x;

    int a1 = a + c;
    int a2 = d + f;

    int b1 = x / a1;
    int r1 = x % a1;
    int ans1 = b1 * a * b + min(r1, a) * b;

    int b2 = x / a2;
    int r2 = x % a2;
    int ans2 = b2 * d * e + min(r2, d) * e;

    if (ans1 > ans2){
        cout << "Takahashi" << endl;
    }else if (ans1 < ans2){
        cout << "Aoki" << endl;
    }else{
        cout << "Draw" << endl;
    }


    return 0;
}
