#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // declare a vector with fixed size with 20 in all the indexes;
    vector<int>v(5,20);

    // a vector of fixed size as 10 where each index will contain garbage value or 0;
    vector<int>v1(10);

    // copying a vector into another vector;
    vector<int>v3(v);
    // OR
    vector<int>v4 = v;

    cout<<"Values in v3 vector: ";
    for(int i=0;i<5;i++)
    {
        cout<<v3[i]<<" ";
    }

    cout<<endl;

    cout<<"Values in v4 vector: ";
    for(int i=0;i<5;i++)
    {
        cout<<v4[i]<<" ";
    }

    return 0;
}