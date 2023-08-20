#include<iostream>
using namespace std;
int main()
{
   int arr[6]={55,77,999,1088,77777,33333};
   int mid,key=33333,i;
   mid=arr[(0+5)/2];
   for(i=0;i<6;i++)
   {
      if(mid==key)
      {
         cout<<"best case"<<i<<endl;
      }
      else if(key>mid)
      {
       int   pmid=arr[(3+5)/2];
         if(pmid==key)
         {
            cout<<"avg case"<<i<<endl;
         }
      }
      else if(key<mid)
      {
        int nmid=arr[(0+1)/2];
         if(key==nmid)
         {
            cout<<"worst case"<<i<<endl;
         }
      }
     // break;
   }

   
   return 0;
} 