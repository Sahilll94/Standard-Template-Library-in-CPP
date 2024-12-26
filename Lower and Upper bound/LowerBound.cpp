#include<iostream>
#include<vector>
#include<algorithm> //HEADER FILE FOR LOWER BOUND;
using namespace std;


int main()
{

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        v[i] = input;
    }

    int toFind;
    cout<<"Enter the element for which you want to find the position: ";
    cin>>toFind;

    // LOWER BOUND simply returns the index of the particular element in the array, if the element is not present then it will return the index of next greater element than the particular element and if there is no greater element then it will return the last index which is 'n';
    int index = lower_bound(v.begin(),v.end(),toFind) - v.begin();

    cout<<"The position of the element "<<toFind<<" Is: "<<index<<endl;

    // SAMPLE INPUT AND OUTPUT -> 
    // Enter the size of the array: 5
    // Enter the elements of the array: 1 3 5 7 8
    // Enter the element for which you want to find the position: 4
    // The position of the element 4 Is: 2

    // SAMPLE INPUT AND OUTPUT -> 
    // Enter the size of the array: 5
    // Enter the elements of the array: 1 4 5 7 9
    // Enter the element for which you want to find the position: 10
    // The position of the element 10 Is: 5

    // SAMPLE INPUT AND OUTPUT ->
    // Enter the size of the array: 5
    // Enter the elements of the array: 1 2 3 5 6
    // Enter the element for which you want to find the position: 9
    // The position of the element 9 Is: 5

    return 0;
}