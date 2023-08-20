#include <iostream>
#include<stack>
using namespace std;
int main()

{
    stack <int> s;
    int arr[3]={4,6,8};
    int i=0;
    for( i=0;i<=2;i++)
    {
        
        s.push(arr[i]);
    }
    cout<<"the size of"<<s.size()<<endl;
    

    return 0;
}
