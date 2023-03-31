#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);// only one will be counted
    s.insert(1);
    s.insert(6);
    s.insert(6);//only one will be counted..
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i:s)
    {
        cout<<i<<endl;
    }

set<int>::iterator it = s.begin();
it++;

    s.erase(it);

    for(auto i:s)
    {
        cout<<i<<endl;
    }

    cout<<"is 2 present or not --> "<<s.count(2)<<endl;

}