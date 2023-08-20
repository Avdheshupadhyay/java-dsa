#include <stdio.h>
void main()
{
    int arr[5] = {6, 8, 1, 19, 5};
    int i, j, k;
    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 5; j++)
        {
            if (arr[j] % 2 == 0)
            {
                if (arr[i] % 2 == 1)
                {
                    k = arr[i];
                    arr[i] = arr[j];
                    arr[j] = k;
                }
            }
        }

            printf("the =%d\n", arr[i]);
        
    }
}