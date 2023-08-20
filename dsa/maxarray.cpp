#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 6, 8, 77, 99};
    int arra;
    for (int i = 0; i < 5; i++)
    {
        arra = max(arr[i], arra);
    }
    cout << "the max is =" << arra << endl;

    return 0;
}
