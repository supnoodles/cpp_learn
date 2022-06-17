#include <iostream>

using namespace std;

// template <typename RT, typename T1, typename T2>

// RT getMax(T1 x, T2 y) {
//     return x > y ? x : y;
// }

// int main() {

//     cout << getMax<double>(20, 30.5) << endl;
//     cout << getMax<double>(30, 20.5) << endl;

//     // equivalent to above
//     cout << getMax<double, int, double>(20, 30.5) << endl;
//     cout << getMax<double, int, double>(30, 20.5) << endl;

// }

int const& max (int const& a, int const& b) {
    cout << "max(int, int)" << endl;
    return a < b ? b : a;
}

template <typename T>
T const& max (T const& a, T const& b) {
    cout << "max(T,T)" << endl;
    return a < b ? b : a;
}

template <typename T>
T const& max (T const& a, T const& b, T const& c) {
    cout << "max(T,T,T)" << endl;
    return max(max(a, b), c);
}


int main() {
    ::max(10.0, 20.0);
    ::max('a', 'b');
    ::max(10, 20);
    ::max<>(10, 20);
    ::max<double>(10, 20);
    ::max(10, 20, 30);

    return 0;
}