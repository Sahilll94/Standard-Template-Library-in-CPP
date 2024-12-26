#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements for the array: ";
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v[i] = input;
    }


    int max = *max_element(v.begin(),v.end());

    int min = *min_element(v.begin(),v.end());

    cout<<"The largest element in the array is: "<<max<<endl;

    cout<<"The smallest element in the array is: "<<min<<endl;


    return 0;
}