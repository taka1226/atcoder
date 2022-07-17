#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;

//inputs
int N, X, Y;

ll v_r[15];
ll v_b[15];

int main(){
	cin >> N >> X >> Y;
	for (int i=0;i<14;i++){
		v_r[i] = 0LL;
		v_b[i] = 0LL;
	}

	v_r[N] = 1;
	int k = 1000;
	while (k--){
		for (int i=10;i>=2;i--){
			ll r = v_r[i]; //レベル i の赤の個数
			v_r[i-1] += r;
			v_b[i] += (X * r);
			v_r[i] = 0;

			ll b = v_b[i];
			v_r[i-1] += b;
			v_b[i-1] += (Y * b);
			v_b[i] = 0;
		}
		// for (int i=10;i>=2;i--){
		// 	ll b = v_b[i];
		// 	v_b[i-1] += b;
		// 	v_b[i-1] += (Y * b);
		// 	v_b[i] = 0;
		// }
	}

	cout << v_b[1] << endl;
	return 0;
}
