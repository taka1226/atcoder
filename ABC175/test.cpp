//
// Created by TakahiroYamaji on 2020/08/15.
//
#include<iostream>
class abc {
    int m_sin;
    int m_len;
    int m_num[ 50 + 1 ];// 1要素4桁×50個＝200桁(乗算用に２倍にしておく)
public:
    abc();
    abc& add( abc& a, abc& b );// 加算
    abc& sub( abc& a, abc& b);// 減算
    abc& mul( abc& a,abc& b);// 乗算
    abc& div( abc& a,abc& b,abc& r);// 除算＆剰余
};

int main(){
    abc s;
    int a = 1;
    int b = 2;
    int& c = s.add(a,b);
    std::cout << s.add(a,b) << std::endl;
}

