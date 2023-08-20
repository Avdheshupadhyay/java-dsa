#include<stdio.h>
void main()
{
    int arr[3][3]={9,13,2,13,9,2,13,9,2};
    int n=3,count=0,key=9;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==key)
         {
            count++;
        }
    }
 }
 printf("the frequency of key in this array= %d",count);
}