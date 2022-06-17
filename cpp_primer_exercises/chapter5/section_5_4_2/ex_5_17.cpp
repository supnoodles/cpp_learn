#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4};
    vector<int> vec2 = {1, 3, 4};
    bool status = true;

    if (vec1 == vec2)
    {
        cout << status;
    }
    else
    {
        unsigned int smallest_size = vec1.size() < vec2.size() ? vec1.size() : vec2.size();
        for (int i = 0; i < smallest_size; ++i)
        {
            if (vec1[i] != vec2[i]){
                status = false;
            }
        }
        cout << status;
    }
}