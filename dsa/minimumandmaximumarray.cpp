#include<iostream>
using namespace std;
int main()
{
    int arr[5]={6,7,57,9,2};
    int small,largest;
    for(int j=0;j<5;j++){
     small=min(arr[j],small);
    }
    cout<<"THE SMALL ELEMENT IN THIS ARRAY="<<small<<endl;
    for(int i=0;i<5;i++)
    {
             largest=max(arr[i],largest);
    }
    cout<<"THE LARGEST ELEMENT IN THIS ARRAY ="<<largest<<endl;
    
     
    return 0;
}