#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "enter the students =" << endl;
   cin >> n;
   int arr[n], count = 0;
   for (int p = 0; p < n; p++)
   {
      cout << "enter the marks of students = " << endl;
      cin >> arr[p];
   }
   for(int i=0;i<n;i++)
   {

      if (arr[i] >= 60)
      {

         count ++;
      }
   }
   
   cout << "how many student only passed =" << count << endl;
// cout << "these student passed=" << arr[p] << endl;
   return 0;
}
