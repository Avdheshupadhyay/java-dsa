#include<iostream>
using namespace std;
int main()
{
    int m=4,n=4;
    int arr[m][n]={{4,5,6,7},{2,8,9,1}};
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"the elemnt ="<<arr[i][j]<<endl;
        }
    }
    
    return 0;
}