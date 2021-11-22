// Generic Programming
// swap 2 elements
// 17/11/21

#include<iostream>
using namespace std;

void Swap(int *p,int *q)
{
    int temp ;
    temp = *p;
    *p = *q;
    *q = temp;

}

int main()
{
    int x = 0, y = 0;

    cout<<"Enter first number :\n";
    cin>>x; 
    cout<<"Enter second number :\n";
    cin>>y; 

    Swap(&x,&y);

    cout<<"Value of x become : "<<x<<"\n";
    cout<<"Value of y become : "<<y<<"\n";

    return 0;
}