#include <string>
#include <iostream>

using namespace std;

int fact(int x){
    int i = x;

    while (i > 1) {
        x *= i - 1;
        --i;
    }
    return x;
}

int main()
{
    cout << fact(5);
}