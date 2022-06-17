// SYNTAX: pair<T1, T2> obj;

/*
1. used to put two types of data together
2. map, multimap, unordered_map, unordered_multimap can use pair to insert data.
*/

#include <iostream>
#include <vector>

using namespace std;

void print(pair<int, int> &obj) { cout << obj.first << " " << obj.second << endl; }

int main() {

    pair<int, int> obj1{10, 20};
    print(obj1);

    pair<int, int> obj2 = make_pair(10, 20);
    print(obj2);
}