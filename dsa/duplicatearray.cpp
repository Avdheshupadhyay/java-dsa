#include<iostream>
using namespace std;
int main()
{
   int arr[5]={5,7,6,5,7};
   int count=0;
    for(int i=0;i<5;i++)
    {
        //cout<<"the array is ="<<arr[i]<<endl;
        for(int j=0;j<5;j++)
        {
            //cout<<"second"<<arr[j]<<endl;
            if(arr[i]==arr[j++])
            {
                if(arr[j]>0)
                {
                cout<<"the repeated array is"<<arr[j]<<endl;
                }
            }
        }
    }
    return 0;
}