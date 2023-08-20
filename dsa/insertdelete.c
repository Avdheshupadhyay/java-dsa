#include<stdio.h>
void main()
{
    int n;
    printf("enter the size of array =");
    scanf("%d",&n);
    int arr[n],x;
    for(x=0;x<n;x++)
    {
        printf("enter the element in array =");
        scanf("%d",&arr[x]);
    }
    int i,j,k,d;
    printf("enter the position for delete ");
    scanf("%d",&d);
      for(j=d;j<4;j++)
        {
            arr[j]=arr[j+1];
            
        }
    
    for(k=0;k<4;k++)
    {
        printf("the  deleted array is %d\n",arr[k]);
    }
       printf("enter the element for insert at deleted position ");
       scanf("%d",&i);
       arr[d]=i;
       for(k=0;k<5;k++)
       {
         printf("the inserting arraty is=%d\n",arr[k]);
       }

    

    
}