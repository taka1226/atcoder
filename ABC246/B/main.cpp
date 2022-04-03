#include<bits/stdc++.h>
using namespace std;

double A, B;

int main(){
    cin >> A >> B;

    double len_2 = (double)pow(A, 2) + (double)pow(B, 2);
    double ans_a = sqrt(pow(A, 2) / len_2);
    double ans_b = sqrt(pow(B, 2) / len_2);

    cout << std::setprecision(10)  << ans_a << " " << ans_b << endl;
    return 0;
}
