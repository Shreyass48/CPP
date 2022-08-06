/*
    https://cplusplus.com/reference/stl/
    1 : it allows all datatypes and it is orderd
    2 : it is slower than unorderd map
    3 : elements are immutable(const) we can just delete and insert it
    4 : the value is itself the key
    5 : duplicate data not allowed
    6 :  It uses BST internally
*/
#include<bits/stdc++.h>
using namespace std;

// User ip values
void Que()
{
    set<int> st;
    int no = 0;
    int n;
    cout<<"enter number of element which you want to enter :"<<endl;
    cin>>no;
    for(int i = 0; i < no; i++)
    {
        cin>>n;
        st.insert(n);
    }

    for(auto it:st)
    {
        cout<<it<<" ";
    }cout<<endl;
}
void Display(set<string>& st)
{
    // display using for each
    for(string it : st)
    {
        cout<<it<<" ";
    }cout<<endl;

    auto itr = st.find("Shreyas");
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
    set<string> s;
    s.insert("Shreyas");
    s.insert("Girish");
    s.insert("Kulkarni");

    Display(s);
    Que();

    return 0;
}


/*  Time Complexity
    Insert : O(logN)
    Erase (delete): O(logN)
    Find (search): O(logN)
    empty = const
    size = const
    count = const

*/