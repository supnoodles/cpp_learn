#include <iostream>

using namespace std;

int main()
{
    int x, y;
    float z;

    cout << "enter two numbers :";
    cin >> x >> y;
    if (y == 0)
    {
        throw invalid_argument("can't divide by zero.");
    }
    else
    {
        z = x / y;
        cout << x << " / " << y << " = " << z;
    }

}