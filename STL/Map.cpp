/*
    https://cplusplus.com/reference/stl/
    1 : it is orderd
    2 : Map uses BST internally
*/
#include<bits/stdc++.h>
using namespace std;

void Display(map<char,int>M)
{
    map<char,int>::iterator itr;
    for(itr = M.begin(); itr != M.end(); itr++)
    {
        cout<<itr->first<<"->"<<itr->second<<" ";
    }cout<<endl;

    //finding element
    cout<<M.find(1)->second<<endl;          // it will display second value of 1

    itr = M.begin();
    itr = M.find('Z');                 // Loop not needed just we want itr
    if(itr == M.end())
        cout<<"Element not find"<<endl;
    else
        cout<<itr->first<<"->"<<itr->second<<" ";


    //count
    cout<<M.count(2)<<endl;             // Use to find particular key

    //erase(Error)
    itr = M.begin();
    while (itr != M.end())
    {
        if(itr->second == 2)
        {
            if(itr == M.begin())
            {
                M.erase(itr);   
                M.begin() = itr++;
                break;
            }
            
        }
        itr++;
    }
    
    itr = M.begin();
    for(itr = M.begin(); itr != M.end(); itr++)
    {
        cout<<itr->first<<"->"<<itr->second<<endl;
    }

}

int main()
{

    map<char,int> M;
    M.insert(pair<int,char>('A',2));
    M.insert(pair<int,char>('B',3));
    M.insert(pair<int,char>('C',4));
    M.insert(pair<int,char>('D',1));
    M.insert({{'E',4},{'f',7}});

    Display(M);

    return 0;
}


/* Time Complexity
    begin = const
    end = const
    insert = value det asl tr const, iterate karun valu det asl tr logn
    empty = const
    size = const
    find,count = logN
*/