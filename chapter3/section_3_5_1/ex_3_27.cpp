#include <iostream>
#include <vector>

using namespace std;

int main()
{
    unsigned buf_size = 1024;
    // not a constexpr, but runs;
    // int ia[buf_size];
    // ok
    // int ia[4 * 7 - 14];
    // ok if fct is a constexpr, error else.
    // int ia[txt_size()];
    // // illegal, no space for null char
    // char st[11] = "fundamental";
}
