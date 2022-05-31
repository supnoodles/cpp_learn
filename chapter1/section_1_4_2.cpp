#include <iostream>

int main()
{   
    // program 1
    int x = 0;
    int y = 0;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> x >> y;
    std::cout << std::endl;

    for (int i = x; i <= y; ++i){
        std::cout << i << std::endl;
    }
}