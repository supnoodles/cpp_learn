// SYNTAX: map<T1,T2> 
// T1 is key type and T2 is value type

// 1. Keys are unique 
// 2. key value pairs are stored in sorted array based on keys
// 3. map is typically used in dictionary type problems

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<string, int> Map;
    Map["A"] = 100;
    Map["B"] = 200;
    Map.insert(make_pair("C", 300));

    // loop through map
    for (auto &el: Map) {
        cout << el.first << " " << el.second << endl;
    }

    // access using [] operator
    cout << Map["A"] << endl;

    return 0;
}