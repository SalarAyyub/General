#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define m 100

int diagonalDifference(int a[][m], int n)
{
    int dLR = 0, dRL = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                dLR+=a[i][j];
            }

            if(i == n-j-1)
            {
                dRL+=a[i][j];
            }
        }
    }

    int diff = dLR - dRL;

    return abs(diff);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int absdiagonalDifference = diagonalDifference(a,n);

    printf("%d", absdiagonalDifference);

    return 0;
}

