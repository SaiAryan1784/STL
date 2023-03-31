#include<iostream>
#include<vector>                                                                                                                                                                                                                                                                                                                                                     ccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc
using namespace std;

int main()
{
    vector<int> a(5,1);
    for(int i:a)
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a);
    for(int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;


    vector<int> v;
    cout<<"capacity-->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity -->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity -->"<<v.capacity()<<endl;
    cout<<"size -->"<<v.size()<<endl;

    v.push_back(4);
    cout<<"capacity -->"<<v.capacity()<<endl;
    cout<<"size -->"<<v.size()<<endl;

    v.push_back(5);
    cout<<"capacity -->"<<v.capacity()<<endl;
    cout<<"size -->"<<v.size()<<endl;

    cout<<"element at 2nd index "<<v.at(2)<<endl;

    cout<<"front element "<<v.front()<<endl;
    cout<<"back element "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after back"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.clear(); //Vector's size == 0 but vector's size remains same....
    cout<<"size-->"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;

}