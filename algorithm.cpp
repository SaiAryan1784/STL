#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);

    cout<<binary_search(v.begin(),v.end(),8)<<endl;

    cout<<"lower bound--> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound--> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a = 3;
    int b=5;

    cout<<"max -->"<<max(a,b)<<endl;
    cout<<"min -->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a-->"<<a<<endl;

    string s = "abcd";
    reverse(s.begin(),s.end());

    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotation"<<endl;

    

}