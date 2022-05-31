#include <iostream>

int main()
{
    // ex 2.36
    // typeid(decltype(a))
    int a = 3, b = 4;
    // int c = 3;
    decltype(a) c = a;
    // int d = 3;
    decltype(a = b) d = a;
    std::cout << typeid(decltype(c)).name() << " " << c << std::endl;
    std::cout << typeid(decltype(d)).name() << " " << d << std::endl;
}