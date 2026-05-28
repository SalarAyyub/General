#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void plusMinus(int a[], int n)
{
    int x=0, y=0, z=0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>0)
        {
            x++;
        }
        else if(a[i]<0)
        {
            y++;
        }
        else if(a[i]==0)
        {
            z++;
        }
    }

    printf("%0.6f\n", (float)x/n);
    printf("%0.6f\n", (float)y/n);
    printf("%0.6f", (float)z/n);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    plusMinus(a,n);


    return 0;
}

