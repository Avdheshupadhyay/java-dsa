 #include<stdio.h>
 void main()
 {
    int arr[5]={8,3,6,7,9};
    int i,j,k,mini,l,max;
    for(i=0;i<5;i++)
    {
        mini=i;
        for(j=0;j<5;j++)
        {
            if(arr[mini]>arr[j])
            {
                mini=j;
            }
        }
    }
        printf("the minimum elment in this array = %d\n ",arr[mini]);
    
    for(k=0;k<5;k++)
    {
        max=i;
        for(l=0;l<5;l++)
        {
            if(arr[max]<arr[l])
            {
                max=l;
            }
        }
    }
        printf(" the maximum element in this array=%d\n",arr[max]);
    
 }