#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll A, B;

int main(){
    cin >> A >> B;
    ll quo_a = A;
    ll quo_b = B;
    ll reminder_a, reminder_b;
    while (quo_a != 0 && quo_b != 0){
        reminder_a = quo_a % 10;
        reminder_b = quo_b % 10;
        quo_a = quo_a / 10;
        quo_b = quo_b / 10;
        if (reminder_a + reminder_b >= 10){
            printf("Hard\n");
            return 0;
        }
    }

    printf("Easy\n");
    return 0;
}
