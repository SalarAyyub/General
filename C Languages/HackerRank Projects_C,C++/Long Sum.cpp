#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long int aVeryBigSum(long long int ar[], int n)
{
    long long int total = 0;

    for(int i=0; i<n; i++)
    {
        total+=ar[i];
    }

    return total;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int ar[n];

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    long long int sum = 0;

    sum = aVeryBigSum(ar,n);

    printf("%lld", sum);

    return 0;

}

