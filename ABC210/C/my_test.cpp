#include <iostream>
#include <vector>

void print(const char* name, const std::vector<int>& v)
{
  std::cout << name << " : {";

  bool first = true;
  for (int x : v) {
    if (first) {
      first = false;
    }
    else {
      std::cout << ", ";
    }

    std::cout << x;
  }
  std::cout << "}" << std::endl;
}

int main()
{
  // (1)
  {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // 2番目の単一要素(値3)を削除
    v.erase(v.begin());
    print("(1)", v);
    std::cout << v.size() << std::endl;
  }

  // (2)
  {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // 範囲[v.begin(), v.begin() + 2)の要素を削除
    v.erase(v.begin(), v.begin() + 2);
    print("(2)", v);
  }
}
