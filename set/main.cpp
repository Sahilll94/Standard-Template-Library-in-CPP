#include<iostream>
#include<set>
using namespace std;

// Set -> SORTED ORDER AND UNIQUE VALUES
int main()
{
    set<int>st;

    st.insert(10);
    st.insert(20);
    st.insert(10); //This 10 will not be inserted in the set as it is already there and set stores unique values;
    st.insert(30);
    st.insert(90);

    // NOTE: find function simply helps iterator 'it' to store the value of 10, if it is present or if 10 is not present in the set then it will store st.end() means last value;
    auto it = st.find(10);

    cout<<*(it)<<endl;

    auto iz = st.find(40);

    // It will print st.end() means last element INDEX as 40 is not in the set;
    cout<<*(iz)<<endl;

    // If no count then 0 will be printed
    cout<<"Count of 10 in set is: "<<st.count(10)<<endl;
    cout<<"Count of 109 in set is: "<<st.count(109)<<endl;

    st.erase(10);
    


    return 0;
}