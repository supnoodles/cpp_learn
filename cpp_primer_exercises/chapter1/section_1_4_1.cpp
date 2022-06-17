#include <iostream>

int main()
{   
    // program 1
    int x = 0;
    int y = 0;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> x >> y;
    std::cout << std::endl;

    while (x <= y) {
        std::cout << x << std::endl;
        ++x;
    }


}