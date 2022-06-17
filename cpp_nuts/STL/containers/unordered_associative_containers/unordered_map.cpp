// std::unordered_map<T1,T2>

/*
map uses RBT, unordered_map uses buckets

1. search, insertion and removal have average constant time complexity

WHY UNORDERED_MAP?
maintains a collection of unique key-value pairs with fast insertion and removal
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, char> umap = {{1, 'a'}, {2, 'b'}};

    // access
    cout << umap[1] << endl;
    cout << umap[2] << endl;

    // update
    umap[1] = 'c';

    //iterate
    for(auto& elm: umap) {
        cout << elm.first << " " << elm.second << " ";
    }
    cout << endl;

    // find
    auto result = umap.find(2);
    if (result != umap.end()) {
        cout << "Found " << result->first << " " << result->second << '\n';
    } else {
        cout << "Not found\n";
    }
}   
