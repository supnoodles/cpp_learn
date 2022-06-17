// std::unordered_set<T>

/*
WHY UNORDDERED SET?
maintain a collection of unique items with fast insertion and removal

1. search, insertion and removal have average constant time lookup
2. internally, elements are organsied into buckets & it uses hashing to insert
   elements into buckets
*/

#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> uset = {4, 1, 2, 3, 4, 2, 3};

    auto search = uset.find(2);

    if (search != uset.end()) {
        cout << "Found " << *search << '\n';
    } else {
        cout << "Not found\n";
    }

    for (auto& elm: uset) {
        cout << elm << " ";
    }
}