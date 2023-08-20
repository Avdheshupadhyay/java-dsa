#include<stdio.h>
void main()
{
    int n,i,j,flag=0,k,l;
    printf("ENTER THE SIZE OF ARRAY =");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {}
    for(j=0;j<n;j++)
    {
        for(k=2;k<arr[j]-1;k++)
        {
            if(arr[j]%k==0)
            {
                flag=1;
            }
        }
    }
    for(l=0;l<n;l++)
    {
        printf("the prime number in array =%d",arr[l]);
    }
}