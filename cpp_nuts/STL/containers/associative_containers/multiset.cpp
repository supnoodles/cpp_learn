/*
SYNTAX: std::multiset<T> objectName;

1. Sorted set that can have duplicates.
2. Insertion, Removal, Search have logaritmic compelxity
3. If we want to store user defined data type in multiset, then we have to 
   provide a compare function.
4. We can pass which way to sort when constructing the object.
*/

#include <iostream> 
#include <set>
#include <string>

using namespace std;

// int main() {

//    // standard sorting
//    // multiset<int> multiSet = {5, 2, 4, 3, 2};
//    // for (const auto&e: multiSet){
//    //    cout << e << endl;
//    // }

//    // decreasing sorting
//    multiset<int, less<int>> multiSet = {5, 2, 4, 3, 2};

//    for (const auto &e: multiSet) {
//       cout << e << endl;
//    }
// }

// example 2

class Person{
public:
   float age;
   string name;
   bool operator<(const Person &rhs) const { return age < rhs.age; }
   bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main() {
   multiset<Person, greater<>> multiSet = {{25, "Rupesh"}, {20, "Hitesh"}};

   for (const auto& e: multiSet) {
      cout << e.age << " " << e.name << endl;
   }
}