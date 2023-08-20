#include<stdio.h>
void main()
{
    int arr[5]={9,7,15,9,6};
    int flag=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i!=j){
            if(arr[i]==arr[j])
            {
                
                continue;
                flag=1;
            }
            }


        }
        if(flag==0)
        {
        printf("%d\n",arr[i]);

        }
        flag=0;

    } 
    
}