#include<iostream>
using namespace std;
void  array(int n)
{
    int arr[n];
    for(int j=0;j<n;j++)
    {
        printf("enter the element=");
        scanf("%d",&arr[j]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"the array is ="<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the size of array =";
    cin>>n;
    array(n);
    return 0;
}