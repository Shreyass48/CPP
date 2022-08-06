/*
    https://cplusplus.com/reference/stl/
    1: pair<int ,int> not allowed in u_map coz u_map uses hashtbl(i.e. set vector pair) for key
    2: less time comp than map 
    3: it uses all primitive datatype , string also allowed as a key
    4 : it is unorded store value using hashtbl
    5 : Unorded map uses hash table internally
*/
#include<bits/stdc++.h>
using namespace std;

void Display(unordered_map<char,int> Mp)
{
    // Display
    unordered_map<char,int>::iterator itr;
    for(itr = Mp.begin(); itr != Mp.end(); itr++)
    {
        cout<<itr->first<<"->"<<itr->second<<" ";
    }cout<<endl;

    //isEmpty
    cout<<"Map is empty or not : "<<Mp.empty()<<endl;
    cout<<"Size of map is : "<<Mp.size()<<endl;

    //find
    itr = Mp.begin();
    itr = Mp.find('Z');                 // Loop not needed just we want itr
    if(itr == Mp.end())
        cout<<"Element not find"<<endl;
    else
        cout<<itr->first<<"->"<<itr->second<<" ";

    // count
    if(Mp.count('A'))                   // Use to find particular key
        cout<<"Key Found"<<endl;
    else 
        cout<<"Key not found"<<endl;

    // erase
    if(Mp.count('A'))                   // Use to find particular key
        Mp.erase('A');
    else 
        cout<<"Key not found"<<endl;

    for(itr = Mp.begin(); itr != Mp.end(); itr++)
    {
        cout<<itr->first<<"->"<<itr->second<<" ";
    }cout<<endl;

}

int main()
{
    unordered_map<char,int> M;
    M.insert(pair<int,char>('A',2));
    M.insert(pair<int,char>('B',3));
    M.insert(pair<int,char>('E',4));
    M.insert(pair<int,char>('D',1));
    M.insert({{'C',4},{'f',7}});

    Display(M);

    return 0;
}
/*
    insert = const
    erase (delete)= const
    find (Search)= avg = const, worst = linear
    empty = const
    size = const
    count = const
*/