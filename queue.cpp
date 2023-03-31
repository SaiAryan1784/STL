#include<iostream>
#include<queue>
using namespace std;

// queue - first in first out

int main()
{
    queue<string> q;

    q.push("sai");
    q.push("aryan");
    q.push("goswami");

    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element after pop "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;
}