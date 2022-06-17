#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename ITERATORS, typename T>
ITERATORS find(ITERATORS first, ITERATORS last, const T& val){
    while (first != last) {
        if (*first == val) {
            return first;
        }
        ++first;
    }
    return last;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    auto found1 = find(vec.begin(), vec.end(), 3);
    // mem address of found element
    cout << &(*found1) << endl;
    // value itself
    cout << *found1 << endl;


    list<string> lst = {"ooga", "booga", "woogedy", "boo"};
    auto found2 = find(lst.begin(), lst.end(), "woogedy");
    // mem address of found element
    cout << &(*found2) << endl;
    // value itself
    cout << *found2 << endl;
}