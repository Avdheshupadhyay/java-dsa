#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {9, 8, 7, 6, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        if(arr[i]>arr[i++])
        {
            swap(arr[i],arr[i++]);
        }
        cout << "the shorted array is =" << arr[i] << endl;