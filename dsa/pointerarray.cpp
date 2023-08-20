#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int *p=&n;
    int sum;
    p++;
    cout<<"the address of ="<<p<<endl;
    p++;
    cout<<"after "<<p<<endl;
    p+=2;
    cout<<"again after"<<p<<endl;
    cout<<"the value after ="<<n<<endl;


    
    return 0;
}