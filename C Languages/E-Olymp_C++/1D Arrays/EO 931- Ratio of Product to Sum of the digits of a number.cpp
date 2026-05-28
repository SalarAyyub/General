#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int n, x, sum=0, prod=1;
	cin>>n;

	while(n>0)
    {
        x = n%10;
        sum+=x;
        prod*=x;
        n/=10;
    }

    double ratio = (double)prod/(double)sum;

    if(!isnan(ratio) && !isinf(ratio))
    {
        printf("%0.3f", ratio);
    }
    else
    {
        printf("%0.3f", 0);
    }

    return 0;
}



