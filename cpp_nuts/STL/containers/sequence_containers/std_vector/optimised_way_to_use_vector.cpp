// vector = linked list + array

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1;

    // shows the doubling effect of vectors capacity
    // a.k.a resizing
    for (int i = 0; i < 32; ++i) {
        vec1.push_back(i);
        cout << vec1.size() << " " << vec1.capacity() << endl;
    }

    // to avoid resizing, we can use the reserve member function.
}