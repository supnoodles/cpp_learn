#include <vector>
#include <iostream>

using namespace std;

void print(const int &i)
{
    cout << i << endl;
}

void print(const int j[2]){
    for (int i = 0; i < 2; ++i){
        cout << j[i] << endl;
    }
}

int main(){
    int i =0;
    int j[2] = {0, 1};

    print(i);
    print(j);
}