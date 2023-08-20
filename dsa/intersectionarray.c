#include<stdio.h>
void main()
{
    int m,n,i,j,k,c=0;
    printf("enter the size of both array=");
    scanf("%d",&n);
    int arr[n],brr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element in first array=");
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("enter the element in second array =");
        scanf("%d",&brr[j]);
    }
    for(k=0;k<n;k++)
    {
        for(m=0;m<n;m++)
        {
            if(arr[k]==brr[m])
            {
                printf("the intersection of array=%d\n",arr[k]);
            }
        }
    }
}