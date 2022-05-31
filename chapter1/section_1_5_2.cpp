#include "Sales_item.h"

// test input: 0-201-70353-X 4 24.99 0-201-70353-X 4 30.00 0-201-70354-X 4 30.00 0-201-70354-X 4 30.00

int main()
{
    Sales_item item1, item2;
    if (std::cin >> item1)
    {
        int cnt = 1;
        while (std::cin >> item2)
        {
            if (item1.isbn() == item2.isbn())
            {
                item1 += item2;
            }
            else
            {
                std::cout << item1 << std::endl;
                item1 = item2;
            }
        }
        std::cout << item1 << std::endl;
    }
    else
    {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }

    return 0;
}