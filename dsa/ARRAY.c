#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array=");
    scanf("%d",&n);
    int rahul[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the element in array=");
        scanf("%d",&rahul[i]);
    }
    for(int j=0;j<n;j++)
    {
        printf(" the array is = %d\n",rahul[j]);
    }
}