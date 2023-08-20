#include<stdio.h>
int factorial(int n)
{
    int ans;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int require(int r)
{
    int ans2;
    for(int j=1;j<=r;j++)
    {
        ans2=ans2*j;
    }
    return ans2;
}
int ncr()
{
    int remedy;
     factorial(n);
     require(r);
    remedy=factorial(n)/(require(r)*(n-require(r)));
    return remedy;
}
int main()
{
    int r,n;
    printf("enter the number n=");
    scanf("%d",&n);
    printf("enter the number r=");
    scanf("%d",&r);
    int ncr();
    printf("the ncr is =%d",(ncr()));
}