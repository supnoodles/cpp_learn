#include <iostream>

int main()
{
    std::cout << "Enter two numbers:";
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and ";
    std::cout << v2 << " is " << v1 + v2;
    return 0;
}