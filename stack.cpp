#include<iostream>
#include<stack>
using namespace std;

// stack-last in first out

int main()
{
    stack<string> s;

    s.push("sai");
    s.push("aryan");
    s.push("goswami");

    cout<<"top element "<<s.top()<<endl;

    s.pop();
    cout<<"top element after pop "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;

}