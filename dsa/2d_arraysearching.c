#include<stdio.h>
void main()
{
    int arr[3][3]={1,5,3,8,7,81,3,11,55};
    int n=3;
    int key=55;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==key)
            {
                printf("the key found at row index = %d\n",i);
                printf("the key found at coloumb index =%d",j);
            }
        }
    }
}