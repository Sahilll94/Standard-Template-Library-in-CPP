#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    // Unique but not sorted (random order) set;
    unordered_set<int>st;

    st.insert(10);
    st.insert(10);
    st.insert(10);
    st.insert(10);
    st.insert(5); // [10,5] OR [5,10] Not Sorted, random order;

    auto it = st.find(5);

    cout<<*it<<endl;

    return 0;
}