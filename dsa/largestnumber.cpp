#include <iostream>
using namespace std;
int main()
{
    int arr[5]={5,7,9,78,88};
    int largest;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                cout<<"the max="<<arr[i]<<endl;
        }
        else
        {
            printf("not");
        }
        
    }
    
    //cout<<"the maximum number is ="<<largest<<endl;
      }
    return 0;
    
}