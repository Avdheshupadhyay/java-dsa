#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {2, 5, 6, 8};
    int i, key = 6;
    int start=0;
    int end=3;
    int mid=arr[(start+end)/2];
    for(i=0;i<=3;i++)
    {
        if(key==mid)
        {
            cout<<"the key is_1 ="<<mid<<endl;
        }
        else if(key>mid)
        {
            mid=arr[((start++)+end)/2];
            if(key==mid)
            {
                cout<<"the key is found_2 = "<<mid<<endl;
                cout<<"the index of key in my array="<<i<<endl;
            }
        }
    }


    return 0;
}