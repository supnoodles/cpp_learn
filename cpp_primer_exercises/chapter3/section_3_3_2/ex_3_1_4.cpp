#include <vector>
#include <iostream>

using std::cin;
using std::cout;
using std::vector;

int main(){
    vector<int> vec;
    int x;

    while (cin >> x){
        vec.push_back(x);
    }

    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i] << std::endl;
    }
}