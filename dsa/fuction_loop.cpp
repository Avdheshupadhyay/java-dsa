#include<iostream>
using namespace std;


void counting(int a){
    
    for(int i=0;i<=a;i++)
    {
        cout<<i<<" "<<endl;
    } 
    cout<<endl;
    return; 
}
int main(){ 
    int a;
    cout<<"enter the number "<<endl;
    cin>>a;
        counting(a);
    return 0;
    }
    
