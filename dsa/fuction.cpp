#include <iostream>
using namespace std;
// int f(int a, int b);
int good(int a, int b);
int main()
{
    int num1 = 6, num2 = 8;
    cout << "the sum is =" << good(num1, num2) << endl;
    return 0;
}
int good(int a,int b)
{
    

    int sum = a + b;
    return sum;
}