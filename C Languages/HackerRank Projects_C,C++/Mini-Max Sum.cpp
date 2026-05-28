#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void miniMaxSum(long a[], int n)
{
    long max = a[0];
    long min = a[0];
    long sum = 0, maxSum = 0, minSum= 0;

    for(int i=0; i<n; i++)
    {
        sum+=a[i];

        if(a[i]>max)
        {
            max = a[i];
        }

        if(a[i]<min)
        {
            min = a[i];
        }
    }

    maxSum = sum - min;
    minSum = sum - max;

    printf("%lld %lld", minSum, maxSum);

}


int main()
{
    long a[5];

    for(int i=0; i<5; i++)
    {
        scanf("%lld", &a[i]);
    }

    miniMaxSum(a,5);


    return 0;
}

