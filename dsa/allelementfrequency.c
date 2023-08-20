#include<stdio.h>
void main()
{
    int arr[5]={1,7,4,2,4};
    int c=0,f=0,p=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        
        printf("the %d=%d\n",arr[i],c);
        }
    }
}