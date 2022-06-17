// SYNTAX: multimap<T1,T2> objl
// T1 is key type, T2 is value type

/*
   1. multimap is an associative container that contains a sorted list of key value pairs
      and permits key repetitions.
   2. It stored key-value pairs in sorted order based on keys.
   3. Lookup: count, find, contains, equal_range, lower_bound, upper_bound
   4. no at() and [] functions to get element like in std::map
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    multimap<char, int> Multimap;

    Multimap.insert(make_pair('a', 1));
    Multimap.insert(make_pair('a', 2));
    Multimap.insert(make_pair('a', 3));
    Multimap.insert(make_pair('b', 4));
    Multimap.insert(make_pair('b', 5));

    // // iterate over multimap
    // for (auto &elm : Multimap)
    // {
    //     cout << elm.first << " " << elm.second << endl;
    // }

    // cout << endl;

    // // get all the pairs of given key
    // auto range = Multimap.equal_range('a');
    // for (auto it = range.first; it != range.second; ++it)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // // finds first instance of a
    // auto pair = Multimap.find('a');
    // cout << pair->first << " " << pair->second << endl;

    // // iterator to first element not less than given key
    // auto range = Multimap.lower_bound('a');
    // cout << range->first << " " << range->second << endl;

    // iterator to the first element greater than the given key
    auto range = Multimap.upper_bound('a');
    cout << range->first << " " << range->second << endl;

    }