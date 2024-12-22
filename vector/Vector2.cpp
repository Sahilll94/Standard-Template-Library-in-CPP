#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    // v.begin() and v.end() ->
    vector<int> v = {1,2,3,4,5};

    // using * dereference keyword as v.begin returns iterator;
    // v.begin() means first value;
    cout<<*(v.begin())<<endl; 

    // v.end() means last values right side means garbage value;
    cout<<*(v.end())<<endl;

    // v.end()-1 will print last value;
    cout<<*(v.end()-1)<<endl;



    // reversed vector first and last element: v = {5,4,3,2,1};
    // v.rbegin means that reversed vector first element and v.end-1 means reversed vector last element
    cout<<*(v.rend()-1)<<endl; // 1

    cout<<*(v.rbegin())<<endl; //5

    return 0;
}