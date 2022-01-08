#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//input
ll X;
set<ll> st;
int main(){
    cin >> X;

    for (int fir=1;fir<=9;fir++){
        for (int diff=-9;diff<=8;diff++){
            int dg = fir;
            string s;
            for (int i=1;i<=18;i++){
                s.push_back(dg+'0');
                st.insert(stoll(s));
                dg += diff;
                if (!(0 <= dg && dg <= 9))break;
            }
        }
    }

    cout << (*st.lower_bound(X)) << endl;
    return 0;
}
