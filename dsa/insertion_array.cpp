#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element =";
        cin>>arr[i];
    }
    for(int k=1;k<n;k++)
    {
        int j=k-1;
        int temp=arr[k];
        for(int j=k-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
    
         arr[j+1]=temp;
    }
    
        
       
 
 for(int p=0;p<n;p++)
 {
    cout<<arr[p]<<endl;
 }
 return 0;
}  