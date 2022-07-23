#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 200005;

int N, C;

int main(){
	cin >> N >> C;
	vector<pair<int, int>> op(N);
	for (int i=0;i<N;i++){
		cin >> op[i].first >> op[i].second;
	}

	vector<int> ans(N);
	for (int i=0;i<30;i++){
		array<int, 2> func = {0, 1};
		int crr = (C >> i) & 1;
		for (int j=0;j<N;j++){
			array<int, 2> f;
			int x = (op[j].second >> i) & 1;
			if (op[j].first == 1) f = {0&x, 1&x};
			if (op[j].first == 2) f = {0|x, 1|x};
			if (op[j].first == 3) f = {0^x, 1^x};
			func = {f[func[0]], f[func[1]]};
			crr = func[crr];
			ans[j] |= crr<<i;
		}
	}

	for (int i=0;i<N;i++){
		cout << ans[i] << endl;
	}
	return 0;
}
