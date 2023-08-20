#include<stdio.h>
void main()
{
   int arr[3][3]={9,5,7,3,2,1,6,4,8};                            
    int n=3,temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i+1;k<n;k++)
            {
                if(arr[k][j]>arr[i][j])
                {
                    temp=arr[k][j];
                    arr[k][j]=arr[i][j];
                    arr[i][j]=temp;
                }
            }
        }
    }
    for(int p=0;p<n;p++)
    {
        for(int h=0;h<n;h++)
        {
            printf("%d ",arr[p][h]);
        }
        printf("\n");
    }
}

