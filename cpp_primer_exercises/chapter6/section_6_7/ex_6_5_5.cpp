#include <vector>
#include <iostream>

using namespace std;

int _add(int x, int y) { return x + y; };
int _subtract(int x, int y) { return x - y; };
int _multiply(int x, int y) { return x * y; };
int _divide(int x, int y) { return x / y; };

int main(){
    // vector whose elements are pointers to a function
    // whose return value is int and parameters int,int
    vector<int(*)(int,int)> vec1;
    vec1.push_back(_add);
    vec1.push_back(_subtract);
    vec1.push_back(_multiply);
    vec1.push_back(_divide);
}

