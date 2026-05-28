#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int* compareTriplets(int a[], int b[], int n)
{
    static int r[2];

    int c=0, d=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            c++;
        }
        else if(a[i] < b[i])
        {
            d++;
        }
        else if(a[i]==b[i])
        {
            continue;
        }
    }

    r[0] = c;
    r[1] = d;

    return r;
}

int main()
{
    int a[3], b[3];

    for(int i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<3; i++)
    {
        scanf("%d", &b[i]);
    }

    int* r = compareTriplets(a, b, 3);

    printf("%d %d", r[0], r[1]);

    return 0;
}

