#include<stdio.h>
void main()
{
    int arr[5]={4,4,6,5,6};
    for(int i=0;i<5;i++)
    {
        for( int j=0;j<5;j++)
        {

        
        if(arr[i]==arr[j])
        {
          //  cout<<"the similler element is ="<<arr[i];
         // printf("the simiiller element is =arr[%d]\n",arr[i]);
        }
        else
        {
            printf("the unique element is=arr[%d]\n",arr[i]);
        }
        }
    }
}