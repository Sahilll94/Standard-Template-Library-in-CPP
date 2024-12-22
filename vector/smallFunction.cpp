#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>v;

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.emplace_back(value);
    }

    cout<<"The elements in the array is: ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    // To know the size of the vector using built-in function .size();
    cout<<"The size of the vector is: "<<v.size()<<endl;

    // you can remove the last element from the vector;
    v.pop_back();

    cout<<"The size of the vector after removing last element is: "<<v.size()<<endl;

    vector<int>v1 = {1,2,3,4};
    vector<int>v2 = {4,5,6};

    cout<<"The elements in the array v1 before swapping: ";
    for(auto i : v1)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"The elements in the array v2 before swapping: ";
    for(auto i : v2)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    // swap function, swaps all the values of v1 into v2 and v2 into v1;
    v2.swap(v1);

    cout<<"The elements in the array v1 is: ";
    for(auto i : v1)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"The elements in the array v2 is: ";
    for(auto i : v2)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    // clear function clears the whole vector like remove all the elements;
    v.clear();
    v1.clear();
    v2.clear();

    // empty function checks whether the vector is empty or not.
    // cout<<v.empty()<<endl;

    // ternary operator -> expression ? if true statement : false statement;
    v.empty() == 1 ? cout<<"v is empty"<<endl : cout<<"v is not empty"<<endl;

    return 0;
}