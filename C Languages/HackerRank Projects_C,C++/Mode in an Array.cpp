#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int birthdayCakeCandles(int a[], int n)
{
    int max = a[0];
    int c = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(a[i] == max)
        {
            c++;
        }
    }

    return c;
}

int main()
{
    int n;
    scanf("%d", &n);

    int candles[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &candles[i]);
    }

    int mode = birthdayCakeCandles(candles, n);

    printf("%d", mode);


   return 0;
}

