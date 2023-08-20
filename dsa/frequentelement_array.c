#include<stdio.h>
void main()
{
    int arr[5]={3,5,8,9,5};
    int f,i,j,k,count=0,maxcount=0,maxelement;
    for(i=0;i<5;i++)
    {
        count=1;
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
               count++;
               if(count>maxcount)
               {
                  maxelement=arr[j];
                  maxcount=count;
               }
            }
        }
    }
           printf("%d=%d\n",maxelement,maxcount);
       

    }
