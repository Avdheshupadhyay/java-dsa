#include <iostream>
using namespace std;
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"enter the  elements=";
            cin>>arr[i][j];
        }
    }
    for(int k=0;k<3;k++)
    {
        for(int p=0;p<3;p++)
        {
            cout<<arr[k][p] <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}