#include<iostream>
#include<stack>
using namespace std;
int main()
{
     stack<float> s;
     for(float i=0.5;i<7.5;i++)
     {
        s.push(i);
     }
   /*s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);*/
    s.pop();
    s.pop();
    s.pop();
    cout<<"the top of the stack="<<s.top()<<endl;
    return 0;
}