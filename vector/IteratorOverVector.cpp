#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;

    int n;
    cout<<"Enter size of vector: ";
    cin>>n;

    cout<<"Enter the inputs for vector: ";
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v.emplace_back(value);
    }

    vector<int>::iterator it = v.begin();

    cout<<"First element in vector: "<<*(it)<<endl;
    
    it++;

    cout<<"second element in vector: "<<*(it)<<endl;

    cout<<"third element in vector: "<<*(it+1)<<endl;

    cout<<"Last element in the vector: "<<*(v.end()-1)<<endl;



    // printing all elements using iterator;
    cout<<"The elements in the vector using iterators: ";
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }



    return 0;
}