// std::unordered_multiset<T>

/*
WHY UNORDERED_MULTISET?
maintains a collection of non-unique items with fast insertion and removal

1. search, insertion and removal have average constant time complexity
2. internally, elements are organised into buckets and hashing is used to is used
   to insert elements into buckets.

*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_multiset<int> umset = {4, 1, 2, 3, 9, 4, 3, 2, 9, 8, 10};

    auto search = umset.find(2);

    if (search != umset.end()) {
        cout << "Found " << *search << '\n';
    } else {
        cout << "Not found\n";
    }

    for (auto& elm: umset) {
        cout << elm << " ";
    }

    cout << endl;
    return 0;
}