#include<bits/stdc++.h>
using namespace std;

int x_1, y_1, x_2, y_2, x_3, y_3;
int main(){
    cin >> x_1 >> y_1;
    cin >> x_2 >> y_2;
    cin >> x_3 >> y_3;

    map<int, int> mp_x;
    map<int, int> mp_y;

    mp_x[x_1]++;
    mp_x[x_2]++;
    mp_x[x_3]++;

    mp_y[y_1]++;
    mp_y[y_2]++;
    mp_y[y_3]++;

    int ans_x, ans_y;
    for (auto itr = mp_x.begin(); itr != mp_x.end(); itr++){
        if (itr->second == 1){
            ans_x = itr->first;
        }
    }
    for (auto itr = mp_y.begin(); itr != mp_y.end(); itr++){
        if (itr->second == 1){
            ans_y = itr->first;
        }
    }

    cout << ans_x << " " << ans_y << endl;

    return 0;
}
