#include<stdio.h>
int factorial(int n)
{
    int ans = 1;
    for(int i=1;i<=n;i++)
    {
        ans= ans * i;
    }
    return ans;
}
int main()
{
    int n;
    printf("enter the number= ");
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    int a;
    printf("enter the second number=");
    scanf("%d",&a);
    printf("%d\n",factorial(a));
      int b;
      printf("enter the third number =");
      scanf("%d",&b);
      printf("%d",factorial(b));
    return 0;
}
