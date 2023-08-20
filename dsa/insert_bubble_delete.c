#include<stdio.h>
void main()
{
    int i,j,k,p,temp,a,b,c,s,n,arr[6];
   //printf("ENTER THE SIZE OF ARRAY=");
  // scanf("%d",&s); 

   
    for(c=0;c<=6-1;c++)
    {
        printf("ENTER THE ELEMENT IN ARRAY =");
        scanf("%d",&arr[c]);
    }
    printf("ENTER THE SPECIFIC POSITION IN ARRAY FOR INSERTING =");
    scanf("%d",&p);
    for(a=p;a<6-1;a++)
    {
        arr[a]=arr[a+1];
    }
    printf("ENTER THE ANY NUMBER FOR INSERT IN ARRAY=");
    scanf("%d",&n);
    arr[p]=n;
    for(b=0;b<6;b++)
    {}
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(k=0;k<6;k++)
    {
        printf("the sorted array =%d\n",arr[k]);
    }
}