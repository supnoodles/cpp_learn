#include <iostream>

using namespace std;

int main()
{
    int x, y;
    float z;

    while (cin)
    {
        try{
            cout << "enter two numbers :";
            cin >> x >> y;
            if (y == 0)
            {
                throw invalid_argument("can't divide by zero.");
            }
            else
            {
                z = x / y;
                cout << x << " / " << y << " = " << z << endl;
            }
        }
        catch (invalid_argument err)
        {
            cout << err.what() << endl;
        }
    }
}