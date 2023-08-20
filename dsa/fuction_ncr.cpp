#include <iostream>
using namespace std;
int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int require(int r)
{
    int reply = 1;
    for (int j = 0; j <= r; j++)
    {
        reply = reply * j;
    }
    factorial(n);
    
    return reply;
}
int main()
{
    int n, r, remedy;
    printf("enter the n \n ");
    scanf("%d", &n);
    cout<<"enter the r"<<endl;
    cin>>r;
    
    require(r);
    remedy= factorial(n)/(require(r)*(n-require(r)));
    cout<<"the ncr = "<<remedy<<endl;
    return 0;
}
