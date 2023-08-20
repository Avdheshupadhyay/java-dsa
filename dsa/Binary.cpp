#include<iostream>
using namespace std;

int main()
{
    int x[3][3]={{2,4,6},{9,6,4}};
    for(int i=0;i<3;i++)
    {
    
        
        for(int j=0;j<3;j++)
        
        {
            if(x[i][j]>0)
            {
            cout<<"the 2-d array is ="<<x[i][j]<<endl;
            }
        }
    }
    
    return 0;
}