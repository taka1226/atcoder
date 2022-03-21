#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

//input
ll x_1, y_1, x_2, y_2;
int main(){
    cin >> x_1 >> y_1 >> x_2 >> y_2;

    ll dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    ll dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

    for (int i=0;i<8;i++){
        ll x = x_1 + dx[i];
        ll y = y_1 + dy[i];

        ll dd = (x - x_2) * (x - x_2) + (y - y_2) * (y - y_2);
        if (dd == 5){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}
