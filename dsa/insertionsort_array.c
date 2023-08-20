#include<stdio.h>
void main()
{
    int arr[5]={7,9,4,3,7};
    int temp;
    for(int i=1;i<5;i++)
    {
        temp=arr[i];
        int j=i-1;
        for(j=i-1;j>=0;j--)
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
    for(int k=0;k<5;k++)
    {
        printf("%d\n",arr[k]);
    }
}