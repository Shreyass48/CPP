#include<bits/stdc++.h>
using namespace std;
void Insert(string &s)
{
    s.push_back('G');
    s.push_back('k');

    // iterator also there string::iterator itr;
    // reverse iterator also there string::reverse_iterator itr;
    cout<<s<<endl;

}

void Manpulating()
{
    string str = "Shreyas";
    string str2 = "Kulkarni";
    str.swap(str2);

    cout<<str<<endl;
    cout<<str2<<endl;

    str2.append(str);
    cout<<str2<<endl; 
}

void Operations()
{
    string str = "shreyas";
    string str2 = "sh";

    cout<<str.find(str2)<<endl;

    cout<<str.substr(2,4)<<endl;

    cout<<str.compare(str2)<<endl;   //return in i.e. non matching chars
}

int main()
{
    string str = "Shreyas";

    // Insert(str);
    // Manpulating();
    Operations();
    return 0;
}
