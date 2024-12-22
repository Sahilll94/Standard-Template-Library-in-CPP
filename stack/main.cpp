#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.emplace(50);

    // size of the stack;
    cout<<"Size of the stack: "<<st.size()<<endl;

    // traversing and accessing elements from the stack;
    stack<int>temp;

    cout<<"The elements in the stack: ";
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    cout<<endl;

    if(st.empty()){
        cout<<"'st' stack is empty."<<endl;
    }


    if(!temp.empty())
    {
        cout<<"'temp' stack is not empty."<<endl;
    }
    





    return 0;
}