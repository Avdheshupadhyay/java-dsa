#include<iostream>
#include<stack>
using namespace std;
int main()
{
   stack<int> p;
   for(int i=3;i<=8;i++)
   {
    p.push(i);
   }
     p.pop();
     p.pop();
   cout<<"the top element ="<<p.top()<<endl;
    return 0;
}