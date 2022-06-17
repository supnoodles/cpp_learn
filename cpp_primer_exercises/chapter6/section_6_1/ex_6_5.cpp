#include <string>
#include <iostream>

using namespace std;

int _abs(int x){
    //smart
    return abs(x);
}

int main()
{
    cout << _abs(-5);
}