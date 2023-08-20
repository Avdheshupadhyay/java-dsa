#include<iostream>
using namespace std;
int main()
{
    int i,j,k,c,l,n;
    cout<<"ENTER THE SIZE OF ARRAY ="<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"ENTER THE ELEMENT IN ARRAY "<<endl;
        cin>>arr[i];
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
          cout<<"the negative elment array "<<arr[j]<<endl;
        }
        else if(arr[j]>0)
        {
            
            if(arr[j]%2==0)
            {
                cout<<"THE EVEN ELEMENT IN ARRAY "<<arr[j]<<endl;
            }
            else if(arr[j]%2==1)
            {
                cout<<"THE ODD ELEMENT IN THIS ARRAY "<<arr[j]<<endl;
            }
        }
    }


    return 0;
}