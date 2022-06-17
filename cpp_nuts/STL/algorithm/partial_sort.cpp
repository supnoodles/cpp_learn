/*
SYNTAX: std::partial_sort(start_iter, middle_iter, last_iter)
        std::partial_sort(exec_policy, start_iter, middle_iter, last_iter)
        std::partial_sort(start_iter, middle_iter, last_iter, comp_fct)
        std::partial_sort(exec_polcy,start_iter, middle_iter, last_iter, comp_fct)

1. partial sort rearranges elements such that range [first,middle] contains sorted elements
   i.e. consider whole container, but only sort from first to middle
2. order of equal elements is not guaranteed to be preserved
3. order of remaining elements is unspecified

*/

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec{5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    partial_sort(vec.begin(), vec.begin() + 4, vec.end());

    for (int& val: vec) {
        cout << val << " ";
    }

    return 0;
}