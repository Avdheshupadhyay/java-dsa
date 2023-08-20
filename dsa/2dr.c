#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("ENTER THE NO. OF ROWS : ");
    scanf("%d",&r);
    printf("ENTETR THE NO. OF COLUMNS : ");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("ENTER THE ELEMENT: ");
        scanf("%d",&a[i][j]);
    }
}
   for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
        
    }
    printf("\n");

}
}