#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec{4, 3, 5, 2, 6, 1};

    // find is a template from <algorithm>
    // find(start_iter, end_iter, find_value)
    vector<int>::iterator it = find(vec.begin(), vec.end(), 4);

    if (it == vec.end()) {
        cout << "Not Found" << endl;
    } else {
        cout << "Found" << endl;
    }

    return 0;
}