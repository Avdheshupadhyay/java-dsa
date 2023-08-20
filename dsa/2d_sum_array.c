#include<stdio.h>
void main()
{
    int count=0,sum=0,n=3;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int p=0;p<n;p++)
    {
        sum=0;
        for(int h=0;h<n;h++)
        {
            sum=sum+arr[p][h];
        }        
    
    printf("%d\n",sum);
    }
}