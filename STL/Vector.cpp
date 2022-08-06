/*
    https://cplusplus.com/reference/stl/

*/

#include<bits/stdc++.h>
using namespace std;

// Display using Loop
void Display(vector<int> vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }cout<<endl;

    for(int i : vec)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"First element : "<<vec.front()<<endl;
    cout<<"Last element : "<<vec.back()<<endl;
}

// Display using Iterator
void DisplayItr(vector<int> vec)
{
    vector<int>::iterator itr;
    for(itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout<<*itr<<" ";
    }cout<<endl;
}


// Swapping the vector
void swapVec()
{
    vector<int> one(2,11);
    vector<int> two(3,22);

    one.swap(two);

    cout<<"Elements one : ";
    for(int i = 0; i < one.size(); i++)
    {
        cout<<one[i]<<" ";
    }cout<<endl;
    cout<<"Elements two : ";
    for(int i = 0; i < two.size(); i++)
    {
        cout<<two[i]<<" ";
    }cout<<endl;
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(21);
    v.push_back(51);

    vector<int> :: iterator itr1 = v.begin();
    v.insert(itr1, 2, 101);    //iterator, no of time times, value
    // v.insert(itr1, 101);    iterator, no of time times

    Display(v);
    DisplayItr(v);
    swapVec();

    return 0;
}


/* Time Complexity
    push_back = constant
    pop_back = constant
    swap = constant
    iterator = constant
    empty = constant
    front , back = constant
    insert = linear
*/

