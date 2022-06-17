#include <iostream>

using namespace std;

int main()
{

    int i = 3;
    int j = 4;
    int k = 10;

    // equivalent
    // test if j smaller than k
    // then, test if i not equal to j.
    if (i != j < k)
    {
        cout << "true" << endl;
    }
    if (i != (j < k))
    {
        cout << "true" << endl;
    }
    if (i != j && j < k)
    {
        cout << "true" << endl;
    }
}