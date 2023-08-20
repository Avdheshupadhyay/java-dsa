#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> a;
    a.push(5);
    a.push(4);
    a.push(8);
    a.pop();
    a.pop();
    cout<<"the front of this array:"<<a.front()<<endl;
    cout<<"the size of this queue ="<<a.size()<<endl;
    if(a.empty())
    {
        cout<<"the code is empty ="<<endl;
    }
    else
    {
        cout<<"the code is not empty ="<<endl;
    }
    return 0;
}