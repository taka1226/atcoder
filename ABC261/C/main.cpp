#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
int main(){
	int N;
	cin >> N;
	for (int i=0;i<N;i++){
		string s;cin >> s;
		if (mp[s] == 0){
			cout << s << endl;
		}else if (mp[s] > 0){
			cout << s << "(" << mp[s] << ")" << endl;
		}
		mp[s]++;
	}
	return 0;
}
