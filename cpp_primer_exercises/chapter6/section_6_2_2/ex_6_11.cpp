#include <iostream>

using namespace std;

// reference parameters
void reset(int &i) {
    i = 0;
}

int main()
{
    int x = 5;
    reset(x);

    cout << x;
}
