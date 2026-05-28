#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int simpleArraySum(int a[], int n)
{
    int total=0;

    for(int i=0; i<n; i++)
    {
        total+=a[i];
    }

    return total;
}

int main()
{
    int n, sum=0;
    scanf("%d",&n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = simpleArraySum(a,n);

    printf("%d", sum);

    return 0;
}

