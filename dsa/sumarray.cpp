#include <iostream>
using namespace std;
int main()
{
    int arr[5]={3,3,5,7,4};
    int brr[5]={5,7,8,5,8};
    int crr[5];
    for(int i=0;i<5;i++)
    {
        for( i=0;i<5;i++)
        {
            
            crr[i]=arr[i]+brr[i];
        
        cout<<"the sum"<<crr[i]<<endl;
        } 

    }
    return 0;
}