#include <vector>
#include <iostream>

using namespace std;

int fct1(int x, int y);


int main(){
    // vector whose elements are pointers to a function
    // whose return value is int and parameters int,int
    vector<int(*)(int,int)> vec1;
    vec1.push_back(fct1);
}

int fct1(int x, int y){
    return x + y;
}