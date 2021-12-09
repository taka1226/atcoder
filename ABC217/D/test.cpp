#include <iostream>
#include <set>
using namespace std;
int main() {
  // set<int> 型のオブジェクト st を生成
  set<int> st;
  // s に 3 を挿入
  st.insert(3);
  // s に 5 を挿入
  st.insert(5);
  // 4 以上の要素のうち最小の要素のイテレータを取得
  auto it = st.lower_bound(4);
  // it の示す要素を出力
  cout << *it << endl;  // 5 を出力
  // it の1つ前のイテレータの示す要素を出力
  cout << *prev(it) << endl; // 3 を出力
}
