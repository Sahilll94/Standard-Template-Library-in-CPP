#include<iostream>
#include<set> //for multiset;
using namespace std;

int main()
{
    // Multiset is sorted but not unique;
    multiset<int>st;

    st.insert(10); // [10]
    st.insert(10); // [10,10]
    st.insert(10); // [10,10,10]
    st.insert(10); // [10,10,10,10]
    st.insert(20); // [10,10,10,10,20]
    st.insert(30);
    st.insert(30);

    st.erase(10); // It will erase all occurences of 10 -> [20]

    // to insert one occurence only;
    st.erase(st.find(30));

    cout<<"the size of the multiset after erasing all occurences of 10: "<<st.size()<<endl;
    
    return 0;
}