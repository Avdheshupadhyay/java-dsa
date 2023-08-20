#include<stdio.h>
void main()
{
    int arr[5]={4,9,2,8,7};
    int temp,c=1,count=0;
    for(int i=0;i<5;i++)
    {
        for( int k=i+1;k<5;k++)
        {
            if(arr[i]<arr[k])
            {
                temp=arr[i];
                arr[i]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int b=0;b<5;b++)
    {
         for(int f=b+1;f<5;f++)
         {
            if(c>0)
            {
                printf("the =(%d,%d)\n",arr[b],arr[f]);
                count++;
            }
         }
    }
    printf("the frequency of inversion of this programe=%d",count);
}