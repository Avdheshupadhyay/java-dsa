#include<stdio.h>
void main()
{
    int i,j,count=0;
    int a[100];
    for(i=0;i<100;i++){
        printf("ENTER THE MARKS OF STUDENT %d: ",i+1);
        scanf("%d",&a[i]);
        for(j=60;j<100;j++){
        if(a[i]==a[j])
        count+=1;
    }
    if(a[i]!=0)
    printf("%d",count);
    
    }
}