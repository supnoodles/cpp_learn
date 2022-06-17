/*
SYNTAX: std::is_sorted(start_iter, end_iter)
        std::is_sorted(start_iter, end_iter, comp fct)
        std::is_sorted(exec policy, start_iter, end_iter, comp_fct)

Checks if elements in range [first,last] are sorted in non-decreasing order (default)

1. can check integral data types
2. can check user defined data types
3. can check using a comp fct obj
4. can check using lambda expression
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1{5, 4, 6, 7, 3, 2, 8, 9, 1};

    sort(vec1.begin(), vec1.end());

    for (auto& elm: vec1) {
        cout << elm << " ";
    }

    cout << endl
         << is_sorted(vec1.begin(), vec1.end());

    return 0;
}