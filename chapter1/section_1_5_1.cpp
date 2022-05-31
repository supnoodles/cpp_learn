#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1;
    while ((std::cin >> item2) && item2.isbn() == item1.isbn()){
        item1 += item2;
    }
    std::cout << item1;
    return 0;
}