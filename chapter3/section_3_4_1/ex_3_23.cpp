#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec;
    int _rand;
    // random number between 1 & 99 & print to show original vector
    cout << "original vector: " << endl;
    for (int i = 0; i < 10; ++i){
        _rand = rand() % 100;
        vec.push_back(_rand);
        cout << _rand << " ";
    }

    // double each entry in vecotr & print new vector
    cout << endl << "new vector: " << endl;
    for (auto it = vec.begin(); it < vec.end(); ++it){
        *it = (*it) * 2;
        cout << *it << " ";
    }
}