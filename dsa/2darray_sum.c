#include<stdio.h>
void main()
{
    int arr[4][4];
    int sum=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("enter the element=");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int a=0;a<4;a++)
    {
        for(int b=0;b<4;b++)
        {
            printf("%d ",arr[a][b]);
        }
        printf("\n");
    }
    for(int k=0;k<4;k++)
    {
        for(int p=0;p<4;p++)
        {
            sum=sum+arr[k][p];
        }
    }
    printf("the sum is =%d\n",sum);
}
