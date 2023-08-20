#include <stdio.h>
int main()
{
  int n;
  printf("enter the size of array=");
  scanf("%d", &n);
  int arr[n];
  for (int j = 0; j < n; j++)
  {
    printf("enter the element in array=");
    scanf("%d", &arr[j]);
  }
  int start = 0;
  int end = n - 1;
  int key, mid;
  printf("enter the key=");
  scanf("%d", &key);
  mid = (start + end) / 2;
  for (int i = 0; i < n; i++)
  {
    if (arr[mid] == key)
    {
      printf("the key is found at index = %d\n", mid);
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
       //mid=(start+end)/2;
      if (arr[mid] == key)
      {
        printf("the key is found at index = %d\n", mid);
        // break;
      }
    }
    else if (arr[mid] > key)
    {
      end = (n - 2) - mid;
      // mid=(start+end)/2;
      if (arr[mid] == key)
      {
        printf("the key is found at index = %d\n", mid);
      }
      // break;
    }
    mid = (start + end) / 2;
  }
  return 0;
}