#include<stdio.h>
void main()
{
    int n,c;
    printf("enter 1 if you want to add a mtrix\n 0 fir not adding a mtrix");
    scanf("%d",&c);
    if(c==1)
    {
    printf("enter the  of array=");
    scanf("%d",&n);
    int x[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter the element=");
            scanf("%d",&x[i][j]);
        }
    }
    }
    int x[n][n];
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<n;l++)
        {
            printf("%d ",x[k][l]);
        }
        printf("\n");
    }
      
}