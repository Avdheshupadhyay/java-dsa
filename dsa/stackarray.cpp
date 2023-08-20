#include<iostream>
#include<stack>
using namespace std;
int main()
{  
    stack<int> j; 
    int arr[5]={7,8,5,9,4};
    for(int i=0;i<5;i++)
    {
        j.push(arr[i]);
        
    }

    cout<<"the size of stack ="<<j.size()<<endl;
    return 0;
}
