#include <string>
#include <iostream>

using namespace std;

int test_static(){
    static int x = 0;
    return ++x;
}

int main()
{
    cout << test_static() << endl;
    cout << test_static() << endl;
    
}