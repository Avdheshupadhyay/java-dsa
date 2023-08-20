#include<stdio.h>
void main()
{
    int arr[5]={3,7,4,9,12};
    int i,j,k,f,l,c,mini;
    for(i=0;i<5;i++)
    {
        mini=i;
        for(j=0;j<5;j++)
        {
            if(arr[mini]>arr[j])
            {
               mini=j;
            }
        }
    }
        printf("%d\n",arr[mini]);
    
}