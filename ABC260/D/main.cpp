#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 200005;

//inputs
int N, K;
int P[MAX_N];

int que[MAX_N]; //キュー番号を保存
set<int> st; //場

//int cnt[MAX_N]; //核球の個数
vector<int>cnt[MAX_N];

int ans[MAX_N];

int main(){
	cin >> N >> K;
	for (int i=0;i<N;i++){
		cin >> P[i];
	}

	for (int i=0;i<MAX_N;i++){
		ans[i] = -1;
	}

	int qc = 0;
	int t = 1;
	for (int i=0;i<N;i++){
		int u = P[i];
		auto iter = st.lower_bound(u);
		if (iter != st.end()){
			//見つかったとき
			st.erase(iter);
			int q = que[*iter];
			que[u] = q;
		}else{
			que[u] = qc;
			qc++;
		}
		st.insert(u);
		cnt[que[u]].push_back(u);

		if (cnt[que[u]].size() == K){
			for (auto v :  cnt[que[u]]){
				ans[v] = t;
			}
			auto iter = st.find(u);
			st.erase(iter);
		}
		t++;


	}

	for (int i=1;i<=N;i++){
		cout << ans[i] << endl;
	}
	return 0;
}
