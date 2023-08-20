#include<stdio.h>
void main()
{
    int n;
    printf("enter the size  of array");
    scanf("%d\n",&n);
   int arr[n];
   int i;
   for(int p=0;p<n;p++)
   {
      printf("enter the element of the array =");
      scanf("%d\n",&arr[p]);
   }
    for(i=0; i<n;i++)
    {
        if(i==0)
        {
            arr[i]=9;
        }
        if(i==(n-1))
        {
            arr[i]=99;
        }

    printf("the array is =%d\n",arr[i]);
    }
}