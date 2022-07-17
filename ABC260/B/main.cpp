#include<bits/stdc++.h>
using namespace std;

//const
const int MAX_N = 1005;
//inputs
int N, X, Y, Z;
int A[MAX_N]; //数学
int B[MAX_N]; //英語

bool used[MAX_N];


int main(){
	cin >> N >> X >> Y >> Z;
	for (int i=0;i<N;i++){
		cin >> A[i];
	}
	for (int i=0;i<N;i++){
		cin >> B[i];
	}

	//数学
	vector<pair<int, int>> v_a;
	for (int i=0;i<N;i++){
		v_a.emplace_back(A[i], -i);
	}
	sort(v_a.begin(), v_a.end(), greater<pair<int,int>>());
	vector<int> ans;
	for (int i=0;i<X;i++){
		ans.push_back(-v_a[i].second);
		used[-v_a[i].second] = true;
	}


	//英語
	vector<pair<int, int>> v_b;
	for (int i=0;i<N;i++){
		if (!used[i]){
			v_b.emplace_back(B[i], -i);
		}
	}

	sort(v_b.begin(), v_b.end(), greater<pair<int,int>>());

	for (int i=0;i<min(Y, (int)v_b.size());i++){
		used[-v_b[i].second] = true;
		ans.push_back(-v_b[i].second);
	}

	//療法
	vector<pair<int, int>> v_c;
	for (int i=0;i<N;i++){
		if (!used[i]){
			v_c.emplace_back(A[i] + B[i], -i);
		}
	}
	sort(v_c.begin(), v_c.end(), greater<pair<int,int>>());

	for (int i=0;i<min(Z, (int)v_c.size());i++){
		used[-v_c[i].second] = true;
		ans.push_back( -v_c[i].second);
	}

	sort(ans.begin(), ans.end());
	for (auto a : ans){
		cout << a + 1 << endl;
	}
	return 0;
}
