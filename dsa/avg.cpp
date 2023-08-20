#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array="<<endl;
    cin>>n;
    int arr[n];
    int sum=0,count=0,avg;
    for(int i=0;i<n;i++)
    {
        
        cout<<"enter the array element="<<endl;
        cin>>arr[i];
        if(arr[i]>0)
        {
        sum=sum+arr[i];
        count++;
        }
        
    }
    avg=sum/count;
    cout<<"the average of this array ="<<avg<<endl;

    return 0;
}