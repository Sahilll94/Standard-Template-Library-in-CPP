#include<iostream>

// to use vector, we need to call vector header file;
#include<vector>
using namespace std;

int main()
{
    // declaration
    vector<int>v;

    // inserting value 1 in 'v' array
    v.push_back(1);

    // inserting value 2 in 'v' array
    v.emplace_back(2);

    // emplace_back is more faster as it directly creates object of the value in place of the memory of the vector;
    // push_back first creates an object of the value then copy or moves it to the vector's memory;

    // accesing values from vector;
    cout<<"Values in the vector: ";
    for(int i=0;i<2;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}