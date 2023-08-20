#include <stdio.h>
void main()
{
    int n,count=0;
    printf("enter the size of array=");
    scanf("%d", &n);
    int arr[n];
    int i = 0;

    
    for (i = 0; i < n; i++)
    {
        printf("enter the element of an array =");
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if(arr[j]==arr[k])
            {
            count++; 
            }
           // printf("%d=%d",count,arr[k]);
            

        
    }
    
                printf("%d=%d",count,arr[i]);
    }


}
