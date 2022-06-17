/*
SYNTAX: std::sort(start_iter, end_iter)
        std::sort(exec_policy, start_iter, end_iter)
        std::sort(exec_policy, start_iter, end_iter, compare func object)

1. internally it uses introsort, which is combination of quicksort, heapsort, and insertionsort.
2. By default it uses quicksort, but if quicksort takes make than nlog(n), it 
   switches to heapsort, and when array size becomes really small it switches to 
   insertion sort.
3. we can use parallel execution policy for better performance

TYPES:
1. sorting integral data types
2. sorting user defined data types
3. sorting using a function object
4. sorting using lamba expression
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>

using namespace std;


// // example 1 - sorting using integral types
// int main() {
//     vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};

//     // execution::par specifies parallel processing
//     std::sort(execution::par, vec.begin(), vec.end());

//     for (auto &elm: vec) {
//         cout << elm << " ";
//     }

//     return 0;
// }


// // example 2 - sorting user defined data type
// class Point {
// public:
//     int x, y;
//     Point(int x = 0, int y = 0): x{x}, y{y} {}
//     bool operator < (const Point& p1) {
//         return (x + y) < (p1.x + p1.y);
//     }
// };

// int main() {
//     vector<Point> vec{{1, 2}, {3, 1}, {0, 1}};
//     sort(vec.begin(), vec.end());

//     for (auto& e: vec){
//         cout << e.x << " " << e.y << endl;
//     }

//     return 0;
// }


// // example 3 - sorting using a function object
// struct customLess{
//     // line 75 will call this operator because of ()
//     bool operator()(int a, int b) const {
//         return a < b;
//     }
// };

// int main() {
//     vector<int> vec{5, 4, 6, 7, 3, 2, 8, 9, 1};
//     sort(vec.begin(), vec.end(), customLess());

//     for (auto& elm: vec) {
//         cout << elm << " ";
//     }

//     return 0;
// }


// example 4 - sorting using lambda expression

int main() {
    vector<int> vec1{5, 4, 6, 7, 3, 2, 8, 9, 1};
    // sort(start_iter, end_iter, comp fct obj)
    sort(vec1.begin(), vec1.end(), [](int a, int b){ return a < b; });

    for(auto& elm: vec1) {
        cout << elm << " ";
    }

    return 0;
}