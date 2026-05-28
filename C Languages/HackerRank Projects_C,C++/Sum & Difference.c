#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    float x, y;

    scanf("%d %d", &n, &m);
    scanf("%f %f", &x, &y);

    printf("%d %d \n", n+m, n-m);
    printf("%0.1f %0.1f", x+y, x-y);

    return 0;
}
