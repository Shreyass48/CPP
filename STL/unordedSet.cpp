/*
    https://cplusplus.com/reference/stl/
    1 : it uses all primitive datatype , string also allowed 
    2 : it is faster than sets
    3 : elements are immutable(const) we can just delete and insert it
    4 : the value is itself the key and it is unorderd
    5 : duplicate data not allowed

*/
#include<bits/stdc++.h>
using namespace std;

// User ip values
void Que()
{
    unordered_set<int> st;
    int no = 0;
    int n;
    cout<<"enter number of element which you want to enter :"<<endl;
    cin>>no;
    for(int i = 0; i < no; i++)
    {
        cin>>n;
        st.insert(n);
    }
    int key = 0;
    cout<<"Enter key :";
    cin>>key;

    // for(auto it:st)
    // {
    //     cout<<it<<" ";
    // }cout<<endl;

    unordered_set<int>::iterator itr;
    itr = st.find(key);
    if(itr == st.end())
        cout<<"Key Not Found";
    else
        cout<<"Key Found";
    
}
void Display(unordered_set<string>& st)
{
    // display using for each
    for(string it : st)
    {
        cout<<it<<" ";
    }cout<<endl;

    auto itr = st.find("Shreyas");     // auto itr like unordered_set<int>::iterator itr;
    if(itr != st.end())
    {
        st.erase("Shreyas");
    }

    for(string it : st)
    {
        cout<<it<<" ";
    }cout<<endl;

}

int main()
{
    unordered_set<string> s;
    s.insert("Shreyas");
    s.insert("Girish");
    s.insert("Kulkarni");

    Display(s);
    Que();

    return 0;
}

// It uses HashTbl internally
/*  Time Complexity
    Insert : O(1)
    Erase (delete): O(1)
    Find (search): O(1)
    empty = const
    size = const
    count = const

*/