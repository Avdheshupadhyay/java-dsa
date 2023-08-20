#include<stdio.h>
void main()
{
    int arr[5]={6,8,4,7,65};
    int i,j,k,c=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                c=1;
            }
        }
    }
    if(c==0)
    {
        printf(" this array is distinct");
    }
    else
    {
        printf("this array is not distinct");
    }
}