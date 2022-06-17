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

int interact(){
    int x;

    cout << "Enter a number to find the factorial of: ";
    cin >> x;
    return x;
}

int main()
{
    int x = interact();
    cout << fact(x);
}