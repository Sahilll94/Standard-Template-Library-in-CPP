#include<iostream>
#include<vector>
#include<algorithm> //Include algorithm for sort;
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements in the array in unsorted order: ";
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v[i] = input;
    }

    // in ASCENDING ORDER;
    sort(v.begin(),v.end());

    // in DESCENDING ORDER;
    // sort(v.begin(),v.end(),greater<int>());

    cout<<"Elements in the array in sorted order: ";
    for(auto i : v)
    {
        cout<<i<<" ";
    }

    return 0;
}