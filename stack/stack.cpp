#include<iostream>
#include<stack>
using namespace std;


int main()
{
    // USER INPUT FOR STACK;
    
    int n;
    cout<<"Enter size of the stack: ";
    cin>>n;


    stack<int>st;

    cout<<"Enter elements for the stack: ";
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        st.push(input);
    }

    cout<<"Elements in the stack: ";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}