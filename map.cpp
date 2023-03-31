#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[6] = "goswami";
    m[4] = "aryan";
    m[2]= "sai";

    m.insert({0,"hello"});
    m.insert({1,"I am"});

    m.insert({5,"bheem"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding - 4 ->"<<m.count(-4)<<endl;

    m.erase(4);
    cout<<"after erase"<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it; i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }

    
}