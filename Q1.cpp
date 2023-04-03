#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(2);

    cout<<"capacity -->"<<vec.capacity()<<endl;
    cout<<"size -->"<<vec.size()<<endl;

    vec.push_back(3);

    cout<<"capacity -->"<<vec.capacity()<<endl;
    cout<<"size -->"<<vec.size()<<endl;

    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl;

    vec.pop_back();

    cout<<"capacity -->"<<vec.capacity()<<endl;
    cout<<"size -->"<<vec.size()<<endl;

    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl;
}