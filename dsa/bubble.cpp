#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array="<<endl;
    cin>>n;
 int arr[n];
 for(int p=0;p<n;p++)
 {
    cout<<"enter the element of array ="<<endl;
    cin>>arr[p];
 }
    int i,j;
    for (i = 0; i < n; i++)
    {
    for(j=(i+1);j<n;j++)

    {
        if (arr[i] > arr[j])
        {
            swap(arr[i], arr[j]);
        }
    }
        cout << "the shorted array is =" << arr[i] << endl;
        
    
    }
    return 0;
}