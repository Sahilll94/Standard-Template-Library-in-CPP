#include<iostream>
#include<vector>
#include<algorithm> //HEADER FILE FOR UPPER BOUND;
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v[i] = input;
    }

    int toFind;
    cout<<"Enter the element for which you want the next greater element in the array: ";
    cin>>toFind;

    int index = upper_bound(v.begin(),v.end(),toFind) - v.begin();


    cout<<"The next greater element than your provided element is: "<<v[index]<<endl;

    // SAMPLE TEST CASES:

    // Enter the size of the array: 5
    // Enter the elements in the array: 1 2 5 6 8
    // Enter the element for which you want the next greater element in the array: 5
    // The next greater element than your provided element is: 6

    // Enter the size of the array: 5
    // Enter the elements in the array: 1 5 9 10 30
    // Enter the element for which you want the next greater element in the array: 34
    // The next greater element than your provided element is: 0 // 0 Because v[5] does not have any value, therefore, it will give 0 or garbage value;

    // Enter the size of the array: 5
    // Enter the elements in the array: 1 2 3 4 5 
    // Enter the element for which you want the next greater element in the array: 19
    // The next greater element than your provided element is: 6029370 // GARBAGE VALUE;

    return 0;
}