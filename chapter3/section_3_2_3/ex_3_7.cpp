#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string str = "1234";

    for (int i = 0; i < str.size(); ++i)
    {
        str[i] = 'X';
    }
    cout << str;
}