#include <iostream>

int main()
{   
    int x = 0;
    int sum = 0;
    while (std::cin >> x){
        sum += x;
    }
    std::cout << "sum is: " << sum << std::endl;
}