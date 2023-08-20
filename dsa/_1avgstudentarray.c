#include<stdio.h>
void main()
{
    int arr[5],count=0,sum=0,avg;
    for(int i=0;i<5;i++)
    {
        printf("ENTER THE ELEMENT IN THE ARRAY =");
        scanf("%d",&arr[i]);
       // printf("the array=%d",arr[i]);
        if(arr[i]>0){
        count++;
        sum=sum+arr[i];
        }
    }
    
    avg=sum/count;
     printf("the avg of student=%d\n",avg);
}