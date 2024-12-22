#include<iostream>
using namespace std;

int main()
{
    pair<int,int>arr[] = {{1,2}, {3,4}, {5,6}};

    cout<<"0th index first value: "<<arr[0].first<<endl;
    cout<<"0th index second value: "<<arr[0].second<<endl;

    cout<<"All index's first value: ";
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].first<<" ";
    }

    cout<<endl;

    cout<<"All index's second value: ";
    for(int i=0;i<3;i++)
    {
        cout<<arr[i].second<<" ";
    }



    return 0;
}