#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int divisibleSumPairs(int a[], int n, int k)
{
    int count = 0;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((a[i]+a[j])%k == 0)
            {
                count++;
            }
        }
    }

    return count;
}
int main()
{
   int n, k;
   scanf("%d %d", &n, &k);

   int a[n];

   for(int i=0; i<n; i++)
   {
       scanf("%d", &a[i]);
   }

   int frequency = divisibleSumPairs(a, n, k);

   printf("%d", frequency);


   return 0;
}

