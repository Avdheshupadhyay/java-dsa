#include<stdio.h>
void main()
{
    int i,j,k,n,temp;
    printf("enter the array size =");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter the element in array=");
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER  FOR REVERSE ARRAY = ");
    scanf("%d",&temp);
    for(j=temp;j>=0;j--)
    {
        printf("THE REVERSE ARRAY TILL N NUMBERS = %d\n",arr[j]);
    }
   /* for(k=0;k<n;k++)
    {
        printf("the array = %d\n ",arr[k]);
    }*/
}