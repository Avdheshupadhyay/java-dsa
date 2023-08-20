#include<stdio.h>
void main()
{
    int n,i,j,c;
    printf("enter the size of array =");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element of array=");
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if((arr[j]>arr[k]))
            {
                c=arr[j];
                arr[j]=arr[k];
                arr[k]=c;
            }
            else if(arr[j]==arr[k])
                {

              }
            printf("the assending array =%d\n",arr[j]);

    }
    }
}